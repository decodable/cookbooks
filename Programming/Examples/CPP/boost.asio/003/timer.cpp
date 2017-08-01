#include "timer.h"

#include <sys/epoll.h>
#include <unistd.h>
#include <sys/timerfd.h>

timer::timer(io_service &io_service) : io_service_(io_service) {
  tfd = timerfd_create(CLOCK_MONOTONIC, TFD_NONBLOCK);
  io_service_.register_event(tfd, EPOLLIN | EPOLLERR, &handler_);
  timeout_ = 0;
}

void timer::expires_from_now(int timeout) {
  timeout_ = timeout;
}

void timer::async_wait(const HANDLER &callback) {
  handler_ = std::bind(&timer::on_timeout, this, callback);

  struct itimerspec tspec;
	tspec.it_value.tv_sec = timeout_;
	tspec.it_value.tv_nsec = 0;
	tspec.it_interval.tv_sec = 0;
	tspec.it_interval.tv_nsec = 0;

  int flags = 0;
  timerfd_settime(tfd, flags, &tspec, NULL);
}

void timer::on_timeout(const HANDLER &callback) {
  size_t s = 0;
  read(tfd, &s, sizeof(s));
  if (callback) {
    callback();
  }
}
