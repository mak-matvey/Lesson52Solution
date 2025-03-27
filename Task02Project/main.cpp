#include <iostream>
using namespace std;

int count_of_number_digitis(int number)
{
	if (number < 0)
	{
		number = -number;
	}

	if (number < 10)
	{
		return 1;
	}

	return count_of_number_digitis(number / 10)
		+ 1;
}

int main()
{

	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << count_of_number_digitis(number) << endl;

	return 0;
}