cmake_minimum_required(VERSION 3.23)
project(ISR_CICD_Labwork)

set(CMAKE_CXX_STANDARD 14)

add_executable(ISR_CICD_Labwork main.cpp calculator/Calculator.cpp calculator/Calculator.h tests/calc_tests.cpp)

add_subdirectory(calculator)

enable_testing()
add_subdirectory(tests)