#pragma once
#include <string>
#include <vector>

struct ASTNode {
    std::string kind;
    std::string value;
};

struct AST {
    std::vector<ASTNode> nodes;
};
