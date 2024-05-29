import std;

constexpr double m_km_conv_rate{ 1.609 };

double miles_to_km(double miles)
{
	return miles * m_km_conv_rate;
}

int main()
{
	std::cout << "Enter the amount of miles you want to convert to kilometers: ";
	double miles{};
	std::cin >> miles;

	std::cout << miles_to_km(miles) << "km";
}