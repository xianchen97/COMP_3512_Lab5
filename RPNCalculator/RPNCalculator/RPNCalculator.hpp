#pragma once
#include <iostream>	
#include <stack>
#include <string>
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
	PRECONDITION: 
	POSTCONDTION: 
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



	/*
	Method takes in an operand a performs reverse polish notation on the given operand.
	The method uses a stack and pops values from the top of the stack.
	PRECONDITIONS: There are values in the stack
				   Passing valid Operation
	Postcondition: RPN performed on the stack.

	*/
	void perform(Operation * operand) {
		int val1 = stack.top();
		stack.pop();
		int val2 = stack.top();
		stack.pop();
		operand->perform(val1, val2);
	}

public:
	int process_form(std::string arg) {};

};