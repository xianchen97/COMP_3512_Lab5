#include <iostream>
#include <string>
#include "RPNCalculator.hpp"

int main()
{

	std::string stringAddition = "4 2 +";
	std::string stringSubtraction = "4 2 -";
	std::string stringMultiplication = "4 2 *";
	std::string stringDivision = "4 2 /";
	std::string complexEquation1 = "2 3 4 * -";
	std::string complexEquation2 = "2 3 - 4 *";


	//ADD
	std::cout << "You entered " << stringAddition << " equal to 4 + 2" << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_form(stringAddition);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;

	//MULTIPLY
	std::cout << "\nYou entered " << stringMultiplication << " equal to 4 * 2" << std::endl;
	result = calculator.process_form(stringMultiplication);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;

	//DIVIDE
	std::cout << "\nYou entered " << stringDivision << " equal to 4 / 2" << std::endl;
	result = calculator.process_form(stringDivision);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;

	//SUBTRACTION
	std::cout << "\nYou entered " << stringSubtraction << " equal to 4 - 2" << std::endl;
	result = calculator.process_form(stringSubtraction);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;

	//COMPLEX EQ
	std::cout << "\nYou entered " << complexEquation1 << " equal to 2 - 3 * 4" << std::endl;
	result = calculator.process_form(complexEquation1);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	
	//COMPLEX EQ
	std::cout << "\nYou entered " << complexEquation2 << " equal to (2 - 3) * 4" << std::endl;
	result = calculator.process_form(complexEquation2);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;

	system("pause");
}