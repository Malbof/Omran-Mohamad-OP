#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".1251");
    system("chcp 1251 > null");

    float x, y, dist;
    string ans;

    cout << "Enter a value for x and  y: ";
    cin >> x >> y;

    dist = sqrt(pow(x + 2, 2) + pow(y, 2));
    if (x >= -1)
        ans = "The point belongs to the shaded area";
    else if (2 >= dist && dist >= 1)
        ans = "The point belongs to the shaded area";
    else
        ans = "The point does not belong to the shaded area";
    cout << ans;
}