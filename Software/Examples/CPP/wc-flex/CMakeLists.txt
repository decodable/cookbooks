cmake_minimum_required (VERSION 2.6)
project (wc)

find_package(FLEX)
FLEX_TARGET(WcScanner wc.l ${CMAKE_CURRENT_BINARY_DIR}/wc.cpp)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_executable(wc wc.cpp)
