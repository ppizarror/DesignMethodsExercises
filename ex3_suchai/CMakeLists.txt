cmake_minimum_required(VERSION 3.19)
project(ex3_suchai)
set(CMAKE_CXX_STANDARD 14)

set(SUCHAI
        suchai/pictures.h
        suchai/suchai.h
        suchai/suchai.cpp
        suchai/commands.h)

set(COMMANDS
        suchai/command_rotate.h
        suchai/command_takePicture.h
        suchai/command_rotate.cpp
        suchai/command_takePicture.cpp)


add_executable(ex3_suchai main.cpp ${SUCHAI} ${COMMANDS})