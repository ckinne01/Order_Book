#include <gtest/gtest.h>
#include <string>
#include "placeholder.hpp"

TEST(PlaceholderTest, ReturnsExpectedString) {
    std::string expected = "This is a placeholder function.";
    EXPECT_EQ(placeholder(), expected);
}