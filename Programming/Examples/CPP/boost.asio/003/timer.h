#ifndef TIMER_H_
#define TIMER_H_

#include "io_service.h"


class timer {
public:
  typedef io_service::HANDLER HANDLER;

  timer(io_service &io_service);
  void async_wait(int timeout, int interval, const HANDLER &callback);
  void on_timeout(const HANDLER &callback);

private:
  int tfd;

  HANDLER handler_;
  io_service &io_service_;
};

#endif
