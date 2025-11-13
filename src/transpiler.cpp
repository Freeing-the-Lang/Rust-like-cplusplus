#include "transpiler.hpp"
#include <sstream>

std::string Transpiler::toCpp(const AST& ast) {
    // 매우 간단한 출력(실제 구현은 여기서 Rust-style → C++ 매핑)
    std::stringstream ss;

    ss << "// C++ Transpiled output\n";
    ss << "#include <iostream>\n\n";
    ss << "int main() {\n";
    ss << "    std::cout << \"Rust-like-C++ executed\";\n";
    ss << "    return 0;\n";
    ss << "}\n";

    return ss.str();
}
