#include <bits/stdc++.h>
using namespace std;
#define int long long
int power(int a, int b)
{
    if (b == 0)
        return 1;

    int half_pow = power(a, b / 2);

    if (b % 2 == 0)
        return half_pow * half_pow;
    else
        return half_pow * half_pow * a;
}
void solve()
{

    int n, k;
    cin >> n >> k;

    k++;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<int> use(n, 1e11);

    for (int i = 0; i < n - 1; i++)
        use[i] = power(10, (arr[i + 1] - arr[i])) - 1;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int want = min(k, use[i]);
        sum += power(10, arr[i]) * want;
        k -= want;
    }

    cout << sum << "\n";
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
    while (t--)
        solve();
}