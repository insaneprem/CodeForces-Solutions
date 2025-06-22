#include <bits/stdc++.h>
using namespace std;
bool check(vector<pair<long long, long long>> &input, long long mid, vector<long long> &suffix)
{
    auto up = upper_bound(input.begin(), input.end(), make_pair(mid, INT_MAX),
                          [](const pair<long long, long long> &a, const pair<long long, long long> &b)
                          { return a.first < b.first; });

    if (up == input.end())
        return true;
    long long ind = up - input.begin();
    return (suffix[ind] <= mid);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<pair<long long, long long>> input(n);

        for (auto &i : input)
            cin >> i.first;
        for (auto &i : input)
            cin >> i.second;

        sort(input.begin(), input.end());

        vector<long long> suffix(n + 1, 0);
        for (long long i = n - 1; i >= 0; i--)
        {
            suffix[i] = input[i].second + suffix[i + 1];
        }

        long long l = -1, r = 1e18;
        while (r - l > 1)
        {
            long long mid = (l + r) / 2;
            (!check(input, mid, suffix)) ? l = mid : r = mid;
        }

        cout << r << " ";
    }

    return 0;
}
