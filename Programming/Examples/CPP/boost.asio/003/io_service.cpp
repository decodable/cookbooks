#include "io_service.h"

#include <sys/epoll.h>

io_service::io_service() {
  int flags = 0;
  efd = epoll_create1(flags);
}

void io_service::register_event(int fd, int events, HANDLER *callback) {
  epoll_event ev;
  ev.events = events;
  ev.data.ptr = static_cast<void *>(callback);
  epoll_ctl(efd, EPOLL_CTL_ADD, fd, &ev);
}

void io_service::run() {
  while(true) {
    run_one();
  }
}

void io_service::run_one() {
  static const int INFINITY = -1;
  int timeout = INFINITY;
  epoll_event events[MAXEVENTS];

  auto n = epoll_wait(efd, events, MAXEVENTS, timeout);
  for (auto i = 0; i < n; ++i) {
    auto &ev = events[i];
    HANDLER* callback = static_cast<HANDLER *>(ev.data.ptr);
    if (callback != NULL) {
      (*callback)();
    }
  }
}
