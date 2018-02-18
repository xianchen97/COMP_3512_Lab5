#pragma once
#include <iostream>	
#include <stack>
#include <string>
#include <sstream>
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
				break;
			case MultiplicationOperation::OPERATION_CODE: return new MultiplicationOperation;
				break;
			case DivisionOperation::OPERATION_CODE: return new DivisionOperation;
				break;
			case SubtractionOperation::OPERATION_CODE: return new SubtractionOperation;
				break;
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
		stack.push(operand->perform(val1, val2));
	}

public:
	/*
	Function processes a string from user input.
	PRECONDITION: User enters valid statement 
	*/
	int process_form(std::string arg) {
		std::istringstream	iss{ arg };
		std::string formula;
		while (iss >> formula) {
			std::istringstream iss2{ formula };

			int integer;
			if (iss2 >> integer) {
				stack.push(integer);
			}
			else {
				perform(operation_type(formula[0]));
			}
		}
		return stack.top();
	};

};