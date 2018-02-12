#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include "expression.hpp"

namespace april
{
    class Identifier: public Expression
    {
        public:
            std::string name;
        
        public:
            Identifier(std::string name): name(name) {}
            virtual llvm::Value* codeGen(CodeGenContext& context);
    };
}

#endif //IDENTIFIER_HPP