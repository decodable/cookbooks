#ifndef TIMER_H_
#define TIMER_H_

#include "io_service.h"


class timer {
public:
  typedef io_service::HANDLER HANDLER;

  timer(io_service &io_service);
  void expires_from_now(int timeout);
  void async_wait(const HANDLER &callback);
  void on_timeout(const HANDLER &callback);

private:
  int tfd;

  int timeout_;
  HANDLER handler_;
  io_service &io_service_;
};

#endif
