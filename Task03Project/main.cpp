#include <iostream>
using namespace std;

int sum_of_digits_in_number(int number)
{
	if (number < 0)
	{
		number = -number;
	}

	if (number < 10)
	{
		return number;
	}

	return sum_of_digits_in_number(number / 10) + number % 10;
}

int main()
{

	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << sum_of_digits_in_number(number) << endl;

	return 0;

}