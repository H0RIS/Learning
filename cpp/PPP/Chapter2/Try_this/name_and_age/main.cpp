import std;

int main()
{
	std::cout << "Please enter your first name and age\n";
	std::string first_name = "???";
	double age = -1;
	std::cin >> first_name >> age;
	std::cout << "Hello, " << first_name << "(age " << age * 12.0 << " months)\n";
}