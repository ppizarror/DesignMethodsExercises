cmake_minimum_required(VERSION 3.19)
project(Library)

set(CMAKE_CXX_STANDARD 14)

# Import googletest CMakeList
add_subdirectory(googletest)

# Import source
add_subdirectory(src)

# Import tests
add_subdirectory(test)

# Enable testing
enable_testing()