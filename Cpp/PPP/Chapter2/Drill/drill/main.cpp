#include "PPP.h";

int main()
{
	cout << "Enter the name of the person you want to write to: \n";
	string first_name;
	cin >> first_name;

	cout << "Enter the name of another friend: \n";
	string friend_name;
	cin >> friend_name;

	cout << "Enter the age of the person you are writing to: \n";
	int age{ -1 };
	cin >> age;
	while (age < 0 || age > 110) 
	{
			cerr << "you're kidding!\n";
			cout << "Enter the age of the person you are writing to: \n";
			cin >> age;
	}

	cout << "Dear " << first_name << ",\n";
	cout << "  How are you?\n";
	cout << "We haven't talked in a while, I was wondering how are things going.\n";
	cout << "Have you seen " << friend_name << " lately?\n";
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	if (age > 70)
	{
		cout << "Are you retired?\n";
	}
	cout << "\nYours sincerely,\n\n\nH";
}