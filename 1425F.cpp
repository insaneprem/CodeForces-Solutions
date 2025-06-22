#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
map<pair<int, int>, int> mpp;
int query(int l, int r)
{
    if (mpp.find({l, r}) != mpp.end())
        return mpp[{l, r}];

    cout << "? " << l << " " << r << endl;
    fflush(stdout);
    int val;
    cin >> val;

    return mpp[{l, r}] = val;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int sum = query(1, 2);
    for (int i = 2; i < n; i++)
    {
        int prefixsum = query(1, i + 1);
        arr[i] = prefixsum - sum;
        sum = prefixsum;
    }
    arr[0] = sum - query(2, n);
    arr[1] = query(1, 2) - arr[0];

    cout << "!" << " ";
    for (auto i : arr)
        cout << i << " ";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    // cin>>t;
    t = 1;
    while (t--)
        solve();
}