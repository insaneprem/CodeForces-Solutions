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
        long long n;
        cin >> n;

        while (n % 2 == 0)
            n = n / 2;

        if (n == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}