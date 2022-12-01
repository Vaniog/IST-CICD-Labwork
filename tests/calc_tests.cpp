#include "../calculator/Calculator.h"

#include <gtest/gtest.h>

TEST(CalcTestSuit, FirstTest){
    ASSERT_EQ(Calculator::Calculate("12"), 3);
}

TEST(CalcTestSuit, SecondTest){
    ASSERT_FALSE(Calculator::Calculate("12") == 4);
}