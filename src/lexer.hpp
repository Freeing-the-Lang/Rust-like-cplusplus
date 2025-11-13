#pragma once
#include <string>
#include <vector>

struct Token {
    std::string kind;
    std::string value;
};

class Lexer {
public:
    static std::string readFile(const std::string& path);
    static std::vector<Token> tokenize(const std::string& src);
};
