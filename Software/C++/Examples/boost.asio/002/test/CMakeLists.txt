cmake_minimum_required (VERSION 2.6)
project (002)

option(USE_BOOST_ASIO "test with boost.asio" OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")

include_directories(..)
add_executable(test_${PROJECT_NAME} test_io_service.cpp ../io_service.cpp ../timer.cpp)
