#include "logic.h"

string s = "";

int factorial(int number)
{
	cout << s << "Start function with number = " << number
		<< endl;

	s += "   ";

	if (number < 0)
	{
		return -1;
	}

	if (number <= 1)
	{
		return 1;
	}

	int result = factorial(number - 1) * number;

	cout << s << "End function with number = " << number
		<< " and result = " << result << endl;

	s.resize(s.length() - 3);

	return result;
}