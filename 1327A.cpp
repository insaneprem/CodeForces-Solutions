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
        long long n, k;
        cin >> n >> k;

        if (n % 2 != k % 2)
            cout << "NO" << endl;
        else
        {
            if (k * k <= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}