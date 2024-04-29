import std;

int main()
{
	std::cout << "Please enter a floating-point value: ";
	double n = 0;
	std::cin >> n;
	std::cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << n * 3
		<< "\ntwice n == " << n * 2
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << std::sqrt(n)
		<< '\n';
}