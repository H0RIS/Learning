import std;

constexpr double max_double{ std::numeric_limits<double>::max() };
constexpr double lowest_double{ std::numeric_limits<double>::lowest() };

int main()
{
	std::vector<double> nums;
	double temp{ 0.0 };
	double largest{ lowest_double };
	double smallest{ max_double };

	std::cout << "Please enter a double:\n";

	while (std::cin >> temp)
	{
		nums.push_back(temp);

		if (temp > largest)
		{
			largest = temp;
			std::cout << "The largest so far\n";
		}

		if (temp < smallest)
		{
			smallest = temp;
			std::cout << "The smallest so far\n";
		}

		std::cout << "Please enter a double:\n";

		/*
		if (nums.size() == 2)
		{
			std::cout << "doubles entered:\n" << nums[0] << "\t" << nums[1] << '\n';

			if (nums[0] == nums[1])
			{
				std::cout << "The numbers are equal\n";
			}
			else if (nums[0] > nums[1])
			{
				std::cout << "The smaller value is " << nums[1] << '\n';
				std::cout << "The larger value is " << nums[0] << '\n';

			}
			else
			{
				std::cout << "The smaller value is " << nums[0] << '\n';
				std::cout << "The larger value is " << nums[1] << '\n';
			}

			if ((nums[1] - nums[0]) < 0.01)
			{
				std::cout << "The numbers are almost equal\n";
			}
			nums = {};
			std::cout << "Please enter a double:\n";
		}
		*/

	}
}