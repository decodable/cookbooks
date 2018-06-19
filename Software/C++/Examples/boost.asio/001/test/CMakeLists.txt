cmake_minimum_required (VERSION 2.6)
project (001)

option(USE_BOOST_ASIO "test with boost.asio" OFF)

if(USE_BOOST_ASIO)
  add_definitions(-DUSE_BOOST_ASIO=1)
  find_package(Boost COMPONENTS system)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")

include_directories(..)
add_executable(test_${PROJECT_NAME} test_io_service.cpp ../io_service.cpp)
target_link_libraries(test_${PROJECT_NAME} ${Boost_LIBRARIES})
