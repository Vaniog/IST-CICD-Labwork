#include <iostream>
#include "calc/Calc.h"

int main(int argc, char** argv) {
    std::cout << "Answer: " << Calc::Eval(argc, argv) << std::endl;
    return 0;
}
