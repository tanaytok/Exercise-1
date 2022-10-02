#include <iostream>
using namespace std;
int main()
{
	cout << "***CALCULATOR***" << endl;
	cout << "*Press + for addiction" << endl;
	cout << "*Press - for subtraction" << endl;
	cout << "*Press * for multiplaction" << endl;
	cout << "*Press / for division" << endl;
	cout << endl;
begin:
	double number1, number2, answer;
	char process;

	cout << "Enter First Number:";
	cin >> number1;
		cout << endl;

		cout << "Enter Process:";
	cin >> process;
	cout << endl;

	cout << "Enter Second Number:";
	cin >> number2;
	cout << endl;

	switch (process)
	{
	case '+':
		answer = (number1 + number2);
		cout << "Answer for Addiction:"<< answer<<endl; break;
	case '-':
		answer = (number1 - number2);
		cout << "Answer for Subtraction:"<< answer << endl; break;
	case '*':
		answer = (number1 * number2);
		cout << "Answer for Multiplaction:"<<answer << endl; break;
	case'/':
		answer = (number1 / number2);
		cout << "Answer for Division:"<<answer << endl; break;
	}
}