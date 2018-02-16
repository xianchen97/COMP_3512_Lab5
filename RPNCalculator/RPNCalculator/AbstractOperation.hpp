#pragma once
#include "Operation.hpp"

/*
Abstract class that implements operation interface
*/
class AbstractOperation : public Operation {
	char operation_type;

	public:
		inline ~AbstractOperation() {};

		/*
		Assigns a valid mathematical operation to operation_type.
		*/
		AbstractOperation(char operation) {
			operation_type = operation;
		}

		int Operation::get_code() {
			return operation_type;
		}




};
