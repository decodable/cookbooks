#ifdef USE_BOOST_ASIO
#include <boost/asio.hpp>
using boost::asio::io_service;
#else
#include "io_service.h"
#endif

void test() {
  io_service io_service;
  io_service.run();
}

int main(int argc, char* argv[]) {
  test();

  return 0;
}
