#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int n, r;
vector<int> k, b, p;
int ans;
void score(vector<int> &a)
{
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        val += a[i] * k[i];
    }
    ans = max(ans, val);
}
void dfs(vector<int> a, int rem, bool can_xor)
{
    if (rem % 2 == 0)
    {
        score(a);
    }

    if (rem == 0)
        return;

    if (can_xor)
    {
        vector<int> xored = a;
        for (int i = 0; i < n; i++)
        {
            xored[i] ^= b[i];
        }
        dfs(xored, rem - 1, false);
    }

    vector<int> permuted(n);
    for (int i = 0; i < n; i++)
    {
        permuted[i] = a[p[i]] + r;
    }
    dfs(permuted, rem - 1, true);
}

void solve()
{
    int u;
    cin >> n >> u >> r;

    vector<int> a(n);
    k.resize(n);
    b.resize(n);
    p.resize(n);

    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto &i : k)
        cin >> i;
    for (auto &i : p)
    {
        cin >> i;
        --i; 
    }

    ans = LLONG_MIN;
    dfs(a, u, true);
    cout << ans;
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
