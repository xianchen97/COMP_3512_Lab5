#pragma once

class Operation {

public:

	/*
	Define inline virtual constructor.
	*/
	inline virtual ~Operation() {};

	/*
	Returns the ASCII code for operator types.
	*/
	virtual int get_code() = 0;

	virtual int perform(int, int);


};
