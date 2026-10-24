#include "placeholder.hpp"
#include <gtest/gtest.h>
#include <string>

TEST(PlaceholderTest, ReturnsExpectedString) {
    std::string expected = "This is a placeholder function.";
    EXPECT_EQ(placeholder(), expected);
}