#include <iostream>
using namespace std;

void main()
{
	int a;
	int i;
	int toplam = 1;
	cout << "FACTORIEL PROGRAMME" << endl;
	cout << endl;
begin:
	cout << "Enter the factorial number:";
	cin >> a;
	cout << endl;
	if (a >= 0)
		for (i = 1; i <= a; i++)
		{
			toplam = toplam * i;
		}
	else
	{
		cout << "You are entered minus value number!" << endl;
		cout << endl;
		cout << endl;
		goto begin;
	}
	cout << endl;
	cout << a << "!="<<toplam << endl;
	cout << endl;
}