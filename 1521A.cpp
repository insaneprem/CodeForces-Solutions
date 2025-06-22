#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (b == 1)
            cout << "NO" << endl;
        else if (b == 2)
        {
            cout << "YES" << endl;
            cout << a << " " << 2 * a << " " << 3 * a << endl;
        }
        else if (b > 2)
        {
            cout << "YES" << endl;
            cout << a << " " << a * (b - 1) << " " << a * b << endl;
        }
    }
}