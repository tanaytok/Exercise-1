#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    double ort;
    cout << "Enter First Number : ";
    cin >> s1;
    cout << "Enrer Second Number: ";
    cin >> s2;
    cout << "Enrer Third Number : ";
    cin >> s3;
    ort = (double)(s1 + s2 + s3) / 3;
    cout << "Ortalama : " << ort << endl;

    if (ort < 50)
    {
        cout << "Failed!";
    }
    else
    {
        cout << "Sucsses";
    }
}
