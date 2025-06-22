#include <bits/stdc++.h>
using namespace std;
long long n, magic;
bool can_make(vector<long long> &need, vector<long long> &have, long long made)
{
    long long cookie = 0;
    long long extra = magic;
    for (long long i = 0; i < n; i++)
    {
        long long req = need[i] * made;
        if (req <= have[i])
            continue;
        else
        {
            if (have[i] + extra < req)
                return false;
            else
            {
                extra -= req - have[i];
            }
        }
    }

    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> magic;

    vector<long long> need(n), have(n);
    for (auto &i : need)
        cin >> i;
    for (auto &i : have)
        cin >> i;

    long long l = 0, r = 2e9 + 7;

    while (r - l > 1)
    {
        long long mid = (l + r) / 2;
        (can_make(need, have, mid)) ? l = mid : r = mid;
    }

    cout << l;
}