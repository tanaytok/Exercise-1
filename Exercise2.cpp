#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter Number:";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Number is Even.";
	}
	else
	{
		cout << "Number is Odd";
	}
}