#include "semantic.hpp"
#include <iostream>

void Semantic::analyze(AST& ast) {
    // Rust-style semantic rules 적용 위치
    std::cout << "[Semantic] AST node count: " 
              << ast.nodes.size() << "\n";
}
