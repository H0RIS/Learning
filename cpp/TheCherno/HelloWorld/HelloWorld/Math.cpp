#include "Log.h"

int Add(int a, int b)
{
	Log("Add");

	return (a + b);
}

int Substract(int a, int b)
{
	Log("Substract");

	return (a - b);
}

int Multiply(int a, int b)
{
	Log("Multiply");

	return (a * b);
}

double Divide(double a, double b)
{
	Log("Divide");

	return (a / b);
}