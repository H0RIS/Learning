#include <iostream>
#include "Log.h"

int Multiply(int a, int b);

int main()
{
	unsigned int variable = 4;
	std::cout << variable << std::endl;

	variable = 42;
	std::cout << variable << std::endl;

	char a = 65;
	std::cout << a << std::endl;

	std::cout << sizeof(bool) << std::endl;
	std::cin.get();

	return 0;
}