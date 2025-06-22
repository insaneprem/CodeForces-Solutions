#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 == 1 || n == 2)
            cout << -1;
        else
        {
            n = n / 2;

            cout << n / 3 + (n % 3 == 0 ? 0 : 1) << " " << n / 2;
        }

        cout << endl;
    }
}