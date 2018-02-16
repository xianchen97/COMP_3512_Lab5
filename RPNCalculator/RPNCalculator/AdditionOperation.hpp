#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation {

public:
	//Defines the operator associated with the class.
	static const char OPERATION_CODE = '+';

	virtual ~AdditionOperation() {};

	//Passes the OPERATION_CODE to the parent class.
	AdditionOperation() :AbstractOperation(OPERATION_CODE) {}

	//Member function performs class operation with two given parameters.
	int perform(int val_1, int val_2) override{
		return val_1 + val_2;
	}


};