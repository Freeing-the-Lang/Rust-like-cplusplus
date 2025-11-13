#include "parser.hpp"
#include <iostream>

AST Parser::parse(const std::vector<Token>& tokens) {
    AST ast;
    for (auto& t : tokens) {
        ast.nodes.push_back(ASTNode{"IDENT", t.value});
    }
    return ast;
}
