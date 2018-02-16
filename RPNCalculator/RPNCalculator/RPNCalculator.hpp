#pragma once
#include <iostream>	
#include <stack>
#include "AdditionOperation.hpp"
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "SubtractionOperation.hpp"

/*
Class performs reverse polish notation using std::stack.
*/
class RPNCalculator {
	int result;
	std::stack<int> stack;

	/*
	Operation returns the operation class associated with the operation type.
	*/
	Operation * operation_type(char value) 
	{
		switch(value){
			case AdditionOperation::OPERATION_CODE: return new AdditionOperation;
			case MultiplicationOperation::OPERATION_CODE: return new MultiplicationOperation;
			case DivisionOperation::OPERATION_CODE: return new DivisionOperation;
			case SubtractionOperation::OPERATION_CODE: return new SubtractionOperation;
		}
	}



	void perform(Operation * operand) {
		operand->perform(stack.top(), stack.top());
	}



};