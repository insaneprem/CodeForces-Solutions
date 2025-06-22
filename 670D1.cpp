#include <bits/stdc++.h>
using namespace std;
int n, magic;
bool can_make(vector<int> &need, vector<int> &have, int made)
{
    int cookie = 0;
    int extra = magic;
    for (int i = 0; i < n; i++)
    {
        int req = need[i] * made;
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

    vector<int> need(n), have(n);
    for (auto &i : need)
        cin >> i;
    for (auto &i : have)
        cin >> i;

    int l = 0, r = 2001;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        (can_make(need, have, mid)) ? l = mid : r = mid;
    }

    cout << l;
}