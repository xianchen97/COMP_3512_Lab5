#pragma once
#include "AbstractOperation.hpp"
class SubtractionOperation : public AbstractOperation {

public:
	//Defines operator associatted with the class.
	static const char OPERATION_CODE = '-';

	virtual ~SubtractionOperation() {}

	//Passes OPERATION_CODE to the base class.
	SubtractionOperation() : AbstractOperation(OPERATION_CODE) {}

	//Member function performs class operation with two given parameters.
	int perform(int val_1, int val_2) override{
		std::cout << "Calling this subtrac func";
		return (val_1 - val_2);
	}
};