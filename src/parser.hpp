#pragma once
#include <vector>
#include "lexer.hpp"
#include "ast.hpp"

class Parser {
public:
    static AST parse(const std::vector<Token>& tokens);
};
