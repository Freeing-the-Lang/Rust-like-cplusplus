#pragma once
#include "ast.hpp"
#include <string>

class Transpiler {
public:
    static std::string toCpp(const AST& ast);
};
