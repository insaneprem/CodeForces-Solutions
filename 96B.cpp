#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> lucky;
const int limit = 1e10;
void dfs(string str)
{
    int num = stoll(str);
    if (num > limit)
        return;

    int cnt4 = count(begin(str), end(str), '4');
    int cnt7 = count(begin(str), end(str), '7');

    if (cnt4 == cnt7)
        lucky.push_back(stoll(str));

    dfs(str + '4');
    dfs(str + '7');
}
void solve()
{
    int n;
    cin >> n;

    dfs("4");
    dfs("7");

    sort(begin(lucky), end(lucky));

    cout << *lower_bound(begin(lucky), end(lucky), n);
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