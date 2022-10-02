#include <iostream>
using namespace std;

int main()
{
	int toplam = 0;
	int number;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "Enter Number:";
		cin >> number;
		toplam = toplam + number;
	}
	cout << "Avarge of 5 number:" << toplam / 10;
	}