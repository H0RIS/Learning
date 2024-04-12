#include <iostream>
#include "Log.h"
#include "Math.h"

int main()
{
	InitLog();

	int x = 1;
	bool comparisonResult = (x == 1);
	if (comparisonResult)
	{
		Log("Hello, World!");
	}

	const char* ptr = nullptr;
	if (ptr)
	{
		Log(ptr);
	}
	else
	{
		Log("ptr is null!");
	}

	unsigned int variable = 4;
	std::cout << variable << std::endl;

	variable = 42;
	std::cout << variable << std::endl;

	char a = 65;
	std::cout << a << std::endl;

	std::cout << sizeof(bool) << std::endl;
	
	std::cout << Add(9, 8) << std::endl;
	std::cout << Substract(9, 8) << std::endl;
	std::cout << Multiply(9, 8) << std::endl;
	std::cout << Divide(9, 8) << std::endl;

	std::cin.get();

	return 0;
}