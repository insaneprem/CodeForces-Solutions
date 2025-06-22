#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        int close = n / x;
        close = close * x;

        if (close + y <= n)
            cout << close + y;
        else
            cout << close + (y - x);
    }
}