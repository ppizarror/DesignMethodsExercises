cmake_minimum_required(VERSION 3.19)
project(Tamagotchi)

set(CMAKE_CXX_STANDARD 14)

# Create neuron library (to link in test executable)
add_library(tamagotchi
        src/state.h
        src/state.cpp
        src/tamagotchi.h)

# Import googletest CMakeList
add_subdirectory(googletest)

# Import tests
add_subdirectory(test)

# Enable testing
enable_testing()

# Create executable
add_executable(TamagotchiMain main.cpp)
target_link_libraries(TamagotchiMain tamagotchi) # Add neuron library to executable