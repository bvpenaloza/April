#include <iostream>
#include "../include/unaryope.hpp"
#include "../include/vardeclaration.hpp"
#include "../parser.h"

extern april::STRUCINFO* april_errors;

namespace april
{
	llvm::Value* UnaryOpe::codeGen(CodeGenContext& context)
	{
		llvm::Instruction::BinaryOps instr;

		switch(operation)
		{
			case TNOT:
				instr = llvm::Instruction::Xor;
				break;

			default:
				printError(april_errors->file_name + ":" + std::to_string(april_errors->line) + " error: el operador unario no esta definido\n");
            	context.addError();
            	return nullptr;
		}
		llvm::Value* rhs_value = rhs.codeGen(context);

		if (rhs_value->getType() != llvm::Type::getInt1Ty(context.getGlobalContext()))
		{
			printError(april_errors->file_name + ":" + std::to_string(april_errors->line) + " error: el operando tiene que ser de tipo 'integer'\n");
            context.addError();
            return nullptr;
		}
		llvm::Value* lhs_value = llvm::ConstantInt::get(llvm::IntegerType::get(context.getGlobalContext(),llvm::Type::getInt1Ty(context.getGlobalContext())->getIntegerBitWidth()), llvm::StringRef("-1"), 10);

		return llvm::BinaryOperator::Create(instr, lhs_value, rhs_value, "unarytmp", context.currentBlock());
	}
}
