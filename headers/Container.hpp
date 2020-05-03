//
// Created by KHML on 2020/05/02.
//

#ifndef BP_CONTAINER_HPP
#define BP_CONTAINER_HPP

#include <vector>

#include "TokenKind.hpp"
#include "Token.hpp"

namespace token
{
    class Container
    {
    public:
        explicit Container(std::vector<Token>& tokens);

        void reset();

        bool hasNext();

        Token& consume();

        bool consume(token::kind::Kind kind);

        Token& current();

        Token& next();

        bool next(token::kind::Kind kind);

    private:
        size_t indicator{0};
        std::vector<Token> tokens;
    };
}

#endif //BP_CONTAINER_HPP
