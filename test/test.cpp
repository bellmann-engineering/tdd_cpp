#include <gtest/gtest.h>

int add(int a, int b) {
    return a+b;
}

TEST(AdditionTest, PositiveNumbers) {
    int a = 4;
    int b = 2;
    int expected = 6;

    int actual = add(a,b);

    EXPECT_EQ(actual, expected);
}


TEST(AdditionTest, PositiveAndNegativeNumbers) {
    int a = -4;
    int b = 4;
    int expected = 0;

    int actual = add(a,b);

    EXPECT_EQ(actual, expected);
}

TEST(AdditionTest, NegativeNumbers) {
    int a = -4;
    int b = -4;
    int expected = -8;

    int actual = add(a,b);

    EXPECT_EQ(actual, expected);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}