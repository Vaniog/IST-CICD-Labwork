#include "../calc/Calc.h"

#include <gtest/gtest.h>
#include <sstream>

std::vector<std::string> SplitString(const std::string& str) {
    std::istringstream iss(str);

    return {std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>()};
}

TEST(CalcTestSuit, SumTest){
    ASSERT_EQ(Calc::Eval(SplitString("2 + 2")), 4);
    ASSERT_EQ(Calc::Eval(SplitString("101 + 12")), 113);
    ASSERT_EQ(Calc::Eval(SplitString("412341 + 123412")), 535753);
}

TEST(CalcTestSuit, SubstractTest){
    ASSERT_EQ(Calc::Eval(SplitString("15 - 3")), 12);
    ASSERT_EQ(Calc::Eval(SplitString("1000 - 123")), 877);
    ASSERT_EQ(Calc::Eval(SplitString("412341 - 123412")), 288929);
}

TEST(CalcTestSuit, DivideTest){
    ASSERT_EQ(Calc::Eval(SplitString("15 / 3")), 5);
    ASSERT_EQ(Calc::Eval(SplitString("1000 / 123")), 8);
    ASSERT_EQ(Calc::Eval(SplitString("412341 / 228")), 1808);
}

TEST(CalcTestSuit, MultipleTest){
    ASSERT_EQ(Calc::Eval(SplitString("15 * 3")), 45);
    ASSERT_EQ(Calc::Eval(SplitString("999 * 123")), 122877);
    ASSERT_EQ(Calc::Eval(SplitString("412341 * 22128")), 534347056);
}