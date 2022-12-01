#include "Calculator.h"

int Calculator::Calculate(const std::string& to_calc) {
    return to_calc[0] - '0' + to_calc[1] - '0';
}
