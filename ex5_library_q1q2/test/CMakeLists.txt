add_executable(
        Tests
        testItems.cpp
        testMatchers.cpp
        testLibrary.cpp
)

target_link_libraries(
        Tests
        gtest_main
        item
        library
        matcher
)

include(GoogleTest)
gtest_discover_tests(Tests)