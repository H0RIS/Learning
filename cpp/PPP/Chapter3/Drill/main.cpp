import std;

constexpr double max_double{ std::numeric_limits<double>::max() };
constexpr double lowest_double{ std::numeric_limits<double>::lowest() };
std::string ask_message{ "Please enter a double followed by a unit( cm, in, ft, m ):" };

int main()
{
	std::vector<double> nums;
	double val{ 0.0 };
	std::string unit{ "" };
	double largest{ lowest_double };
	double smallest{ max_double };
	double conv_val{ 0.0 };

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