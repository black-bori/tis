#include "til/til.hpp"
#include <gtest/gtest.h>

TEST(TilTest, AddFunction) {
    // Test basic addition
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(100, 200), 300);
    
    // Test with large numbers
    EXPECT_EQ(add(4294967295, 1), 0); // Overflow test for uint32_t
}

TEST(TilTest, AddFunctionComplex) {
    // Test edge cases
    EXPECT_EQ(add(1, add(1, 1)), 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
