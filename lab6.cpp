#include <iostream>
#include <cmath> 
using namespace std;

double solution(double, double, double);
double elem_generate(double, double, double);
double factorial(double);


double solution(double x, double n, double e)
{
	double elem1 = 0;
	double res = 0;
	double elem;
	double k = 0;
	double diff;
	do {
		elem = elem_generate(x, n, k);
		k += 1;
		diff = abs(elem - elem1);
		res += elem;
	} while (diff > e);
	return (res);
}


double elem_generate(double x, double n, double k)
{
	return (pow(-1, k) / (factorial(k) * factorial(n + k)) * pow((x / 2), (2 * k + n)));
}


double factorial(double n)
{
	if ((n == 1) || (n == 0)) 
	{
		return (1);
	}
	else {
		return (factorial(n - 1) * n);
	}
}


void main()
{
	double x;
	double n;
	double e;
	double res;

	cout << "n: ";
	cin >> n;
	cout << "x: ";
	cin >> x;
	cout << "e: ";
	cin >> e;

	res = solution(x, n, e);

	cout << res;
}