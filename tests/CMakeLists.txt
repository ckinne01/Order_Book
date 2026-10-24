add_executable(orderbook_tests placeholder_test.cpp)
target_link_libraries(orderbook_tests PRIVATE orderbook GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(orderbook_tests)