#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	system("chcp 1251 > null");

	float b, q, n;
	cout << "Enter a value for b: ";
	cin >> b;
	cout << "Enter a value for q: ";
	cin >> q;
	cout << "Enter a value for n: ";
	cin >> n;
	cout << b*pow(q, n-1);
}