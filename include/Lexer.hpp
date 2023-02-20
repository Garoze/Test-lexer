#pragma once

#include <optional>
#include <string>

namespace Lunasm {

class Lexer
{
public:
    Lexer(const std::string&);

    void Tokenizer(void);

private:
    void Immediate(void);
    void Identifier(void);
    void Register(void);

private:
    void step(void);
    void skip(std::size_t);
    void skip(const std::string&);
    char eat(void);

private:
    bool is_empty(void) const;
    std::optional<char> peek(std::size_t);
    std::size_t offset(std::size_t) const;

    char current_char(void) const;

private:
private:
    std::size_t m_index;
    std::string m_source_code;
};

}  // namespace Lunasm
