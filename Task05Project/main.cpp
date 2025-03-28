#include <iostream>
using namespace std;

int get_max_digit_in_number(int number)
{
	if (number <= 0)
	{
		number = -number;
	}

	if (number < 10)
	{
		return number;
	}

	int max = number % 10;
	number = get_max_digit_in_number(number / 10);

	return max > number ? max : number;
}

int main()
{

	int number, x;

	cout << "Input your number: ";
	cin >> number;

	cout << "Max digit in your number: " << get_max_digit_in_number(number) << endl;

	return 0;

}