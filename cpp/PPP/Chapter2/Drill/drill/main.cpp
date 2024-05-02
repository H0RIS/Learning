#include "PPP.h";

int main()
{
	std::cout << "Enter the name of the person you want to write to: \n";

	string first_name;
	std::cin >> first_name;

	std::cout << "Dear " << first_name << ",\n";
	std::cout << "  How are you?\nWe haven't talked in a while, I was wondering how are things going.\n";

	std::cout << "Enter the name of another friend: \n";
	string friend_name;
	std::cin >> friend_name;

	std::cout << "Have you seen " << friend_name << " lately?\n";

	std::cout << "Enter the age of the person you are writing to: \n";
	int age{ -1 };
	std::cin >> age;
	if (age < 0 || age > 110)
	{
		error("you're kidding!");
	}
}