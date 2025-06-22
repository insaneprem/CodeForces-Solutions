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
        string a, b;
        cin >> a >> b;

        char d = a[0];
        a[0] = b[0];
        b[0] = d;

        cout << a << " " << b << endl;
    }
}