#include "../headers/block.hpp"
#include "../headers/codegencontext.hpp"


namespace april
{
    Block::~Block()
    {
        //std::cout << "destructor block" << std::endl;
        for (Statement*& stmt: statements)
            if (stmt != nullptr)
                delete stmt;
    }

    Symbol* Block::codeGen(CodeGenContext& context)
    {
        Symbol* last = nullptr;
        for (Statement*& stmt: statements)
        {
            if (!stop)
            {
                last = stmt->codeGen(context);
            }
            else
                break;
        }
        
        // if (last == nullptr)
        //     std::cout << "result es NULO (BLOCK)" << std::endl;
        // else
        //     std::cout << "result (BLOCK): " << *last << std::endl;

        return last;
    }
}