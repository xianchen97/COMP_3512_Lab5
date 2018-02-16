#include "AbstractOperation.hpp"
class DivisionOperation : public AbstractOperation {

public:
	//Define operation associated with the class.
	static const char OPERATION_CODE = '/';
	virtual ~DivisionOperation() {};

	//Passes the OPERATION_CODE to the base class.
	DivisionOperation() : AbstractOperation(OPERATION_CODE) {}

	//Member function performs class operation with two given parameters.
	int perform(int val_1, int val_2) {
		return val_1 / val_2;
	}

};