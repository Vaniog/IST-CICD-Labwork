cmake_minimum_required(VERSION 3.12)

project(ISR_CICD_Labwork)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(calc)

add_executable(main main.cpp calc/Calc.h calc/Calc.cpp)

enable_testing()
add_subdirectory(tests)