#ifndef STRING_HPP
#define STRING_HPP

#include "expression.hpp"

namespace april
{
    class String: public Expression
    {
        public:
            std::string value;
        
        public:
            String(std::string value): value(value) {}
            virtual llvm::Value* codeGen(CodeGenContext& context);
            Type getType() { return Type::string; }
    };
}

#endif //STRING_HPP