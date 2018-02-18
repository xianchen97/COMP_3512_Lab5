#pragma once

class Operation {

public:

	/*
	Define inline virtual constructor.
	*/
	virtual ~Operation() {};

	/*
	Returns the ASCII code for operator types.
	*/
	virtual int get_code() = 0;

	/*
	Performs operation between two ints.
	*/
	virtual int perform(int, int) = 0;


};
