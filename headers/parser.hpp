//
// Created by KHML on 2020/05/02.
//

#ifndef BP_PARSER_HPP
#define BP_PARSER_HPP

#include <cyan/expression.hpp>

#include "Container.hpp"

namespace parser
{
    cyan::Expression identifier(token::Container& container);
}

#endif //BP_PARSER_HPP