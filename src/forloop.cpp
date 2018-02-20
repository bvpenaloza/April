#include <iostream>
#include "../include/forloop.hpp"
#include "../include/codegencontext.hpp"

namespace april
{
    llvm::Value* ForLoop::codeGen(CodeGenContext& context)
    {
        llvm::Function* function = context.currentBlock()->getParent();
        llvm::BasicBlock* first_cond = llvm::BasicBlock::Create(context.getGlobalContext(), "first_cond", function);
        llvm::BasicBlock* cond_block = llvm::BasicBlock::Create(context.getGlobalContext(), "cond_block");
        llvm::BasicBlock* loop_block = llvm::BasicBlock::Create(context.getGlobalContext(), "loop_block");
        llvm::BasicBlock* else_block = llvm::BasicBlock::Create(context.getGlobalContext(), "else_block");
        llvm::BasicBlock* merge_block = llvm::BasicBlock::Create(context.getGlobalContext(), "merge_block");
        llvm::BranchInst::Create(first_cond, context.currentBlock());

        context.setCurrentBlock(first_cond);
        llvm::Value* first_value = condition->codeGen(context);
        if (first_value == nullptr)
        {
            std::cout << "Falta implementacion del bloque the en el for..." << std::endl;
            exit(1);
        }
        llvm::BranchInst::Create(loop_block, else_block, first_value, context.currentBlock()); // -AQUI

        function->getBasicBlockList().push_back(cond_block);
        context.setCurrentBlock(cond_block);
        llvm::Value* cond_value = condition->codeGen(context);
        if (cond_value == nullptr) 
        {
            std::cout << "codeGen para el condicional del for fallo..." << std::endl;
            exit(1);
        }
        llvm::BranchInst::Create(loop_block, merge_block, cond_value, context.currentBlock());

        function->getBasicBlockList().push_back(loop_block);
        context.setCurrentBlock(loop_block);
        llvm::Value* loop_value = block->codeGen(context);
        if (loop_value == nullptr) 
        {
            std::cout << "codeGen para el valor del for fallo..." << std::endl;
            exit(1);
        }
        llvm::BranchInst::Create(cond_block, context.currentBlock());

        function->getBasicBlockList().push_back(else_block);
        context.setCurrentBlock(else_block); // el for puede aceptar else, aqui se implementaria dicho bloque

        llvm::BranchInst::Create(merge_block, context.currentBlock());
        function->getBasicBlockList().push_back(merge_block);
        context.setCurrentBlock(merge_block);

        return merge_block;
    }
}