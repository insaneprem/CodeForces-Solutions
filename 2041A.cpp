#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    vector<int> arr(6, 0);
    for (int i = 0; i < 4; i++)
    {
        int val;
        cin >> val;
        arr[val]++;
    }

    for (int i = 1; i <= 5; i++)
        if (arr[i] == 0)
            cout << i << " ";
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}