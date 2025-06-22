#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n % 2 == 0)
        {
            cout << (n / 2) * m << endl;
        }
        else if (m % 2 == 0)
        {
            cout << (m / 2) * n << endl;
        }
        else
            cout << ((n - 1) / 2) * m + ((m / 2) + 1) << endl;
    }
}