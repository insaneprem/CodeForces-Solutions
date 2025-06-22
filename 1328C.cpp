#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    string a = "1", b = "1";
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (flag)
        {
            if (str[i] == '0')
                a += '0', b += '0';
            else if (str[i] == '2')
                a += '1', b += '1';
            else
                a += '1', b += '0', flag = 0;
        }
        else
        {
            if (str[i] == '0')
                a += '0', b += '0';
            else if (str[i] == '2')
                a += '0', b += '2';
            else
                a += '0', b += '1';
        }
    }

    cout << a << "\n"
         << b << "\n";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    // t=1;
    while (t--)
        solve();
}