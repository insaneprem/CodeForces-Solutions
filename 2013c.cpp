#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int n;
int query(string str)
{
    cout << '?' << " " << str << endl;
    cout.flush();
    int value;
    cin >> value;
    return value;
}
void solve()
{
    cin >> n;
    string str = "";
    bool flag = true;
    for (int i = 0; i < 2 * n; i++)
    {
        if (str.size() == n)
            break;
        if (flag)
        {
            if (query(str + '1'))
                str += '1';
            else if (query(str + '0'))
                str += '0';
            else
                flag = false;
        }

        if (!flag)
        {
            if (query('1' + str))
                str = '1' + str;
            else if (str.size() == n - 1)
                str = '0' + str;
            else if (query('0' + str))
                str = '0' + str;
        }
    }

    cout << "! " << str << endl;
    cout.flush();
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