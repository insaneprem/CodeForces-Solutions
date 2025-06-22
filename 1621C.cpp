#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int query(int ind)
{
    cout << '?' << " " << ind + 1 << endl;
    int val;
    cin >> val;
    return val - 1;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, -1);

    for (int i = 0; i < n; i++)
    {
        int curr = query(i);
        while (arr[curr] == -1)
        {
            int temp = curr;
            curr = query(i);
            arr[temp] = curr;
        }
    }

    cout << '!' << " ";
    for (auto i : arr)
        cout << i + 1 << ' ';
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
    cin >> t;
    // t=1;
    while (t--)
        solve();
}