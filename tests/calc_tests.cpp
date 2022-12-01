#include "../calculator/Calculator.h"

#include <gtest/gtest.h>
#include <random>

TEST(CalcTestSuit, SimpleSumTest){
    ASSERT_EQ(Calculator::GetSum(2, 2), 4);
}

TEST(CalcTestSuit, SumTest){
    srand(time(nullptr));
    for (int i = 0; i < 1000; i++) {
        int x = rand();
        int y = rand();
        ASSERT_EQ(Calculator::GetSum(x, y), x + y);
    }
}