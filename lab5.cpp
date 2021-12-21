#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int out = 0;
	int i;
	int j;
	int y;
	int u;
	int number;
	bool simple;

	for (i = 1; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			for (y = 0; y <= 9; y++) {
				number = i * 10000 + j * 1000 + y * 100 + j * 10 + i;
				simple = true;
				if (out < 10) {
					for (u = 2; u <= ceil(sqrt(number)); u++) {
						if (number % u == 0) {
							simple = false;
							break;
						}
					}
					if (simple) {
						cout << number << endl;
						out++;
					}
				}

			}
		}
	}
}