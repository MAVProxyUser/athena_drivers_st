/*
 *    Copyright 2015, Xiaomi Corporation All rights reserved.
 *
 *    sensor toucheventlistener native library
 *
 */

#include <fcntl.h>
#include <errno.h>
#include <math.h>
#include <poll.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/select.h>
#include <linux/input.h>
#include <linux/input-event-codes.h>
#include "TouchSensorHandler.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifdef LOG_TAG
#undef LOG_TAG
#define LOG_TAG "touchsensorhandler"
#endif

TouchSensorHandler::TouchSensorHandler():InputEventCircularReader
    (NUM_TOUCH_EVENT_MAX)
{
  data_fd = openInput();
  mPollFd.fd = data_fd;
  mPollFd.events = POLLIN;
  mPollFd.revents = 0;
  memset(&mPendingEvent, 0, sizeof(struct input_event));
}

TouchSensorHandler::~TouchSensorHandler()
{
  if (data_fd >= 0) {
    close(data_fd);
  }
}

int TouchSensorHandler::getFd() const 
{
  return data_fd;
}

int TouchSensorHandler::processEvents(input_event * data, int count)
{

  if (count < 1)
    return -EINVAL;

  ssize_t n = fill(data_fd);
  if (n < 0) {
    return n;
  }
  int numEventReceived = 0;
  input_event const *event;
  //get the latest input event status all the time and always report the latest event to user
  while (n && readEvent(&event)) {
    int type = event->type;
    if (type == EV_KEY) {
      if (event->code == (GESTURE_XM_ADDR + LPWG_SINGLETAP_DETECTED)
          || event->code == (GESTURE_XM_ADDR + LPWG_DOUBLETAP_DETECTED)
          || event->code == (GESTURE_XM_ADDR + LPWG_TOUCHANDHOLD_DETECTED)
          || event->code == (GESTURE_XM_ADDR + LPWG_SWIPE_DETECTED)) {
        memcpy(data, event, sizeof(input_event));
      }
      numEventReceived++;
    }
    //printf("processEvents: type:0x%x, code: 0x%x, value: %d, count: %d, n: %d\n", type, event->code, event->value, count, n);
    n--;
    next();
  }
  if (numEventReceived > count) {
    numEventReceived = count;
    //printf("processEvents: numEventReceived > count force setting latest event to read!\n");
  }
  return numEventReceived;
}

int TouchSensorHandler::pollTouchEvents(input_event * data, int count)
{
  int nbEvents = 0;
  int n = 0;

  do {
    // see if we have some leftover from the last poll()
    //printf("pollTouchEvents: check poll status: 0x%x, count: %d\n", mPollFd.revents, count);
    if (mPollFd.revents & POLLIN) {
      int nb = processEvents(data, count);
      //printf("pollTouchEvents: processEvents: 0x%x, nb: %d, count: %d\n", mPollFd.revents, nb, count);
      if (nb <= count) {
        // no more data for touch
        mPollFd.revents = 0;
      }
      count -= nb;
      nbEvents += nb;
      //data += nb;
    }
    if (count) {
      // we still have some room, so try to see if we can get
      // some events immediately or just wait if we don't have
      // anything to return
      //printf("pollTouchEvents: waiting for poll returned\n");
      n = poll(&mPollFd, 1, 1000);      //timeout setting to 500ms
      //printf("pollTouchEvents: waiting for poll returned,n = %d\n",n);
      if (n < 0) {
        int err;
        err = errno;
        printf("poll() failed (%s)\n", strerror(errno));
        return -err;
      } else if (n == 0) {
        //stands for timeout
        //printf("poll() timeout\n");
        mPollFd.revents = 0;
        return 0;
      }
    }
  } while (n && count);

  return nbEvents;
}

int TouchSensorHandler::openInput(void)
{
  int fd = -1;
  const char *dirname = "/dev/input";
  char devname[PATH_MAX];
  char *filename;
  DIR *dir;
  struct dirent *de;
  dir = opendir(dirname);
  if (dir == NULL) {
    return -1;
  }
  strcpy(devname, dirname);
  filename = devname + strlen(devname);
  *filename++ = '/';
  while ((de = readdir(dir))) {
    if (de->d_name[0] == '.'
        && (de->d_name[1] == '\0'
            || (de->d_name[1] == '.' && de->d_name[2] == '\0')))
      continue;
    strcpy(filename, de->d_name);
    //printf("get input device(%s)\n", devname);
    //printf("get file(%s)\n", filename);
    fd = open(devname, O_RDWR);
    if (fd >= 0) {
      //printf("get input device(%s)\n", devname);
      char name[80];
      if (ioctl(fd, EVIOCGNAME(sizeof(name) - 1), &name) < 1) {
        name[0] = '\0';
      }
      //printf("name = %s, inputName = %s\n", name, inputName);
      if (!strcmp(name, "synaptics_dsx")) {
        //printf("get wanted input device(%s)\n", devname);
        break;
      } else {
        close(fd);
        fd = -1;
      }
    } else {
      //printf(" input device open failed(%s)(%d)\n", devname, fd);
    }
  }
  closedir(dir);
  return fd;
}
