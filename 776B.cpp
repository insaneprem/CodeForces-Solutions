#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    vector<int> seive(n + 2, 1);

    for (int i = 2; i * i <= n + 1; i++)
    {
        if (seive[i] == 1)
        {

            for (int j = i * i; j <= n + 1; j += i)
            {
                seive[j] = 2;
            }
        }
    }
    cout << (n > 2 ? 2 :  1 ) << "\n";
    for (int i = 2; i <= n + 1; i++)
        cout << seive[i] << " ";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}