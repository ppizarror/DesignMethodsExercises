cmake_minimum_required(VERSION 3.19)
project(ex2_length)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex2_length main.cpp src/length.h src/meter.cpp src/inch.cpp)