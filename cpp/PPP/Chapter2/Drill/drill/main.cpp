import std;

int main()
{
	std::cout << "Enter the name of the person you want to write to: \n";

	std::string first_name;
	std::cin >> first_name;

	std::cout << "Dear " << first_name << ",\n";
	std::cout << "  How are you?\nWe haven't talked in a while, I was wondering how are things going.\n";

	std::cout << "Enter the name of another friend: \n";
	std::string friend_name;
	std::cin >> friend_name;

	std::cout << "Have you seen " << friend_name << " lately?";

}