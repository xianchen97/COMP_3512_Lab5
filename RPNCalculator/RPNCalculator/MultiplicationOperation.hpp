#pragma once
#include "AbstractOperation.hpp"
class MultiplicationOperation : public AbstractOperation {

public:
	//Defines the operator associated with the class.
	static const char OPERATION_CODE = '*';

	virtual ~MultiplicationOperation() {};

	//Passes OPERATION_CODE to the parent class.
	MultiplicationOperation() : AbstractOperation(OPERATION_CODE) {}

	/**
	Member function performs class operation with two given parameters.
	PRECONDITION: Values are not null.
	POSTCONDITION: returns the addition between the two values in the parameters.
	**/
	int perform(int val_1, int val_2) 
	{
		return (val_1 * val_2);
	}
};