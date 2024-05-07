import std;

int main()
{
	std::vector<int> nums;
	int temp{ 0 };

	std::cout << "Please enter 2 ints:\n";

	while (std::cin >> temp)
	{
		nums.push_back(temp);
		if (nums.size() == 2)
		{
			std::cout << "ints entered:\n" << nums[0] << "\t" << nums[1] << '\n';

			if (nums[0] > nums[1])
			{
				std::cout << "The smaller value is " << nums[1] << '\n';
				std::cout << "The larger value is " << nums[0] << '\n';

			}
			else
			{
				std::cout << "The smaller value is " << nums[0] << '\n';
				std::cout << "The larger value is " << nums[1] << '\n';
			}

			nums = {};
			std::cout << "Please enter 2 ints:\n";
		}
	}
}