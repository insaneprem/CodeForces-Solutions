#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int cntU, cntD, cntL, cntR, x, y, x2, y2, n;
string str;
bool check(int val)
{
    int u = (val / n) * 1LL * cntU;
    int d = (val / n) * 1LL * cntD;
    int l = (val / n) * 1LL * cntL;
    int r = (val / n) * 1LL * cntR;

    for (int i = 0; i < val % n; i++)
    {
        u += (str[i] == 'U');
        d += (str[i] == 'D');
        l += (str[i] == 'L');
        r += (str[i] == 'R');
    }

    int finalX = x + (r - l);
    int finalY = y + (u - d);

    int temp = ((int)(abs(finalX - x2) + abs(finalY - y2)));

    return temp <= val;
}
void solve()
{
    cin >> x >> y >> x2 >> y2;
    cin >> n;
    cin >> str;

    cntU = count(str.begin(), str.end(), 'U');
    cntD = count(str.begin(), str.end(), 'D');
    cntL = count(str.begin(), str.end(), 'L');
    cntR = count(str.begin(), str.end(), 'R');

    int l = 0, r = 2e18;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (check(mid)) ? r = mid : l = mid;
    }

    if (r == 2e18)
        cout << -1;
    else
        cout << r;
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
    // cin>>t;
    t = 1;
    while (t--)
        solve();
}