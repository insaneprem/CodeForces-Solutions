#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> arr;
void solve()
{
    int n;
    cin >> n;

    auto ind = upper_bound(arr.begin(), arr.end(), n) - arr.begin();
    cout << ind << "\n";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 3; i * i <= 1e15; i += 2)
    {
        int val = i * i;
        if (val & 1)
            arr.push_back((i * i) / 2 + 1);
    }

    int t;
    cin >> t;
    // t=1;
    while (t--)
        solve();
}