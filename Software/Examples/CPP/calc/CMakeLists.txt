cmake_minimum_required (VERSION 2.6)
project (calc)

find_package(BISON)
find_package(FLEX)
BISON_TARGET(CalcParser calc.y ${CMAKE_CURRENT_BINARY_DIR}/calc.cpp)
FLEX_TARGET(CalcScanner calc.l ${CMAKE_CURRENT_BINARY_DIR}/calc_scanner.cpp)
ADD_FLEX_BISON_DEPENDENCY(CalcScanner CalcParser)

include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_executable(calc calc.cpp calc_scanner.cpp)
