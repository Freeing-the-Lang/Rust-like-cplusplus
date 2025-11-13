#include "lexer.hpp"
#include <fstream>
#include <sstream>

std::string Lexer::readFile(const std::string& path) {
    std::ifstream f(path);
    std::stringstream ss;
    ss << f.rdbuf();
    return ss.str();
}

std::vector<Token> Lexer::tokenize(const std::string& src) {
    std::vector<Token> out;

    // 매우 단순한 토크나이저(실제 구현은 여기서 확장)
    std::string buf;
    for (char c : src) {
        if (isspace(c)) {
            if (!buf.empty()) {
                out.push_back({"IDENT", buf});
                buf.clear();
            }
        } else {
            buf.push_back(c);
        }
    }
    if (!buf.empty()) out.push_back({"IDENT", buf});

    return out;
}
