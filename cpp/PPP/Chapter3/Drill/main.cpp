import std;

constexpr double max_double{ std::numeric_limits<double>::max() };
constexpr double lowest_double{ std::numeric_limits<double>::lowest() };

int main()
{
	std::string ask_message{ "Please enter a double followed by a unit( cm, in, ft, m ):" };
	std::vector<double> nums;
	double val{ lowest_double };
	std::string unit{ "" };
	double largest{ lowest_double };
	double smallest{ max_double };
	double conv_val{ lowest_double };
	bool is_illegal{ false };
	std::cout << ask_message << '\n';

	while (std::cin >> val >> unit)
	{
		nums.push_back(val);

		if (unit == "m")
		{
			conv_val = val;
		}
		else if (unit == "cm")
		{
			conv_val = val / 100;
		}
		else if (unit == "in")
		{
			conv_val = val * 2.54 / 100;
		}
		else if (unit == "ft")
		{
			conv_val = val * 2.54 * 12 / 100;
		}
		else
		{
			std::cout << "Illegal unit. Please choose from the the following! ( cm, in, ft, m )\n";
			is_illegal = true;
		}

		if (!is_illegal)
		{
			if (val > largest)
			{
				largest = val;
				std::cout << "The largest so far\n";
			}

			if (val < smallest)
			{
				smallest = val;
				std::cout << "The smallest so far\n";
			}

			std::cout << "Entered value converted to m: " << conv_val << " m" << '\n';
		}
		is_illegal = false;
		std::cout << '\n' << ask_message << '\n';

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