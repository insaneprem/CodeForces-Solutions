#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
            cout << 2 << " " << n << endl;
        else
            cout << 2 << " " << n - 1 << endl;
    }
}