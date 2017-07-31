#include "io_service.h"

#include <sys/epoll.h>

io_service::io_service() {
  int flags = 0;
  efd = epoll_create1(flags);
}

void io_service::run() {
  static const int INFINITY = -1;
  int timeout = INFINITY;
  epoll_event events[MAXEVENTS];

  epoll_wait(efd, events, MAXEVENTS, timeout);
}
