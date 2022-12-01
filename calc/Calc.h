#pragma once
#include <iostream>
#include <vector>

class Calc {
public:
    static int Eval(const std::vector<std::string>& vec);
    static int Eval(int argc, char** argv);
};