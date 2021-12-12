add_executable(
        Tests
        testItems.cpp
)

target_link_libraries(
        Tests
        gtest_main
        item
)

include(GoogleTest)
gtest_discover_tests(Tests)