#include <iostream>
#include <string>
#include <filesystem>

#include "lexer.hpp"
#include "parser.hpp"
#include "ast.hpp"
#include "semantic.hpp"
#include "transpiler.hpp"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "[Rust-like-C++] usage: rlc <file.ruststyle>\n";
        return 1;
    }

    std::string inputPath = argv[1];

    if (!std::filesystem::exists(inputPath)) {
        std::cerr << "[Error] File not found: " << inputPath << "\n";
        return 1;
    }

    std::string source = Lexer::readFile(inputPath);

    auto tokens = Lexer::tokenize(source);
    auto ast    = Parser::parse(tokens);

    Semantic::analyze(ast);

    std::string cppOutput = Transpiler::toCpp(ast);

    std::cout << "===== Transpiled C++ Output =====\n";
    std::cout << cppOutput << "\n";

    return 0;
}
