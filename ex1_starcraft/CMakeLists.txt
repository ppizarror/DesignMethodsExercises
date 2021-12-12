cmake_minimum_required(VERSION 3.19)
project(ex1_starcraft)
set(CMAKE_CXX_STANDARD 14)

set(STARCRAFT
        src/tanks.h
        )

add_executable(ex1_starcraft main.cpp ${STARCRAFT})