#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> nums(n + 1, 0);
    for (long long i = 1; i <= n; i++) cin >> nums[i];

    vector<pair<pair<long long, long long>, long long>> query(m + 1);

    for (long long i = 1; i <= m; i++) {
        long long l, r, d;
        cin >> l >> r >> d;
        query[i] = {{l, r}, d};
    }

    vector<long long> contribution(m + 2, 0);

    for (long long i = 0; i < k; i++) {
        long long l, r;
        cin >> l >> r;
        contribution[l]++;
        contribution[r + 1]--;
    }

    for (long long i = 1; i <= m; i++) contribution[i] += contribution[i - 1];

    vector<long long> ans(n + 2, 0);

    for (long long i = 1; i <= m; i++) {
        ans[query[i].first.first] += query[i].second * contribution[i];
        ans[query[i].first.second + 1] -= query[i].second * contribution[i];
    }

    for (long long i = 1; i <= n; i++) ans[i] += ans[i - 1];

    for (long long i = 1; i <= n; i++) cout << ans[i] + nums[i] << " ";

    return 0;
}
