#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "1 ile 3 arasinda bir sayý giriniz:";
	cin >> x;

	switch (x) {
	case 1: {
		cout << "1 sayisini girdiniz.";
		break;
	}
	case 2: {
		cout << "2 sayisini girdiniz.";
		break;
	}
	case 3: {
		cout << "3 sayisini girdiniz.";
		break;
	}
	default: {
		cout << "1 ile 3 arasinda bir sayi girmediniz.";
		break;
	}
	 }
	return 0;
	
}
