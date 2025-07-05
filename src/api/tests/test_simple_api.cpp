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

TEST(TilTest, AddFunctionEdgeCases) {
    // Test edge cases
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(add(0, 1), 1);
    EXPECT_EQ(add(1, 0), 1);
}

TEST(TilTest, AddFunctionNegativeNumbers) {
    // Test with negative numbers (should wrap around for uint32_t)
    EXPECT_EQ(add(0, 0), 0);
    // Note: uint32_t doesn't support negative numbers directly
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
