#include "Calc.h"
//menya zovut Aytal
/// Eval the expression
/// \param argc (size of argv)
/// \param argv (string array)
/// \return result of operation
///
/// \examples Calc::Eval(3, ["3", "+", "2"]) -> 5

int Calc::Eval(int argc, char** argv) {
    std::vector<std::string> vec;
    for (int i = 1; i < argc; i++) {
        vec.emplace_back(argv[i]);
    }
    return Eval(vec);
}

/// Eval the expression
/// \param vec (vector of strings)
/// \return result of operation
///
/// \examples Calc::Eval("3 + 2") -> 5

int Calc::Eval(const std::vector<std::string>& vec) {
    if (vec.size() != 3) {
        std::cout << "Wrong input\n";
        exit(-1);
    }
    int x = std::stoi(vec[0]);
    int y = std::stoi(vec[2]);
    int ans = 0;
    if (vec[1] == "+") {
        ans = x + y;
    } else if (vec[1] == "-") {
        ans = x / y;
    } else if (vec[1] == "*") {
        ans = x * y;
    } else if (vec[1] == "/") {
        ans = x / y;
    }

    return ans;
}
