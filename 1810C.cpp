#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, del, add;
    cin >> n >> del >> add;

    set<long long> st;
    long long sol = 0, ans = LLONG_MAX;

    for (long long i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        if (st.find(x) == st.end())
            st.insert(x);
        else
            sol += del;
    }

    vector<long long> arr;
    for (auto i : st)
        arr.push_back(i);

    long long size = arr.size();

    for (long long i = 1; i <= size; i++)
    {
        long long target = arr[i - 1];
        long long to_add = (target - i) * add;
        long long remove = (size - i) * del;

        ans = min(ans, to_add + remove);
    }

    ans = min(ans, size * del + add);

    cout << ans + sol << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
