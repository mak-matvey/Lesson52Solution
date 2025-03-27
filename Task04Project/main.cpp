#include <iostream>
using namespace std;

bool is_power_of_3(int number)
{
	if (number <= 0)
	{
		return false;
	}

	if (number == 1)
	{
		return true;
	}

	if (number % 3 != 0)
	{
		return false;
	}

	return is_power_of_3(number / 3);
}

int main()
{

	int number, x;

	cout << "Input your number: ";
	cin >> number;

	cout << "Is your number is a power of 3? " << (is_power_of_3(number) ? "Yes" : "No") << endl;

	return 0;

}