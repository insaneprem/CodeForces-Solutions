#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    int c, d;
    cin >> c >> ch >> d;

    int total = (c - a) * 60 + (d - b);
    total = total / 2;

    a += total / 60;

    b += total % 60;

    if (b >= 60)
    {
        a++;
        b = b % 60;
    }
    if (a < 10 && b < 10)
        cout << '0' << a << ':' << '0' << b;
    else if (a < 10)
        cout << '0' << a << ':' << b;
    else if (b < 10)
        cout << a << ':' << '0' << b;
    else
        cout << a << ':' << b;
}