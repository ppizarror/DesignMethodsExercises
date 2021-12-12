add_executable(
        NeuronTests
        testNeuronClass.cpp
)

# https://google.github.io/googletest/quickstart-cmake.html
target_link_libraries(
        NeuronTests
        gtest_main
        neuron
)

include(GoogleTest)
gtest_discover_tests(NeuronTests)