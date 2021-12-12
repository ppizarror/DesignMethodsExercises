add_executable(
        TamaTests
        testTamagotchi.cpp
)

# https://google.github.io/googletest/quickstart-cmake.html
target_link_libraries(
        TamaTests
        gtest_main
        tamagotchi
)

include(GoogleTest)
gtest_discover_tests(TamaTests)