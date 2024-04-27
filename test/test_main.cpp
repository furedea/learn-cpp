#include <gtest/gtest.h>

int add(int a, int b);

TEST(AddFunctionTest, PositiveNumbers) {
    EXPECT_EQ(3, add(1, 2));
}

TEST(AddFunctionTest, NegativeNumbers) {
    EXPECT_EQ(-3, add(-1, -2));
}

TEST(AddFunctionTest, PositiveAndNegativeNumbers) {
    EXPECT_EQ(0, add(-1, 1));
}

// メイン関数
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
