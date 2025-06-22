#include <bits/stdc++.h>
using namespace std;
long long n = 3;
vector<long long> arr(3);

bool solve(long long team)
{
    if (arr[0] < team || arr[1] < team)
        return false;

    long long rem = accumulate(arr.begin(), arr.end(), 0LL) - 2 * team;

    return rem >= team;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long q;
    cin >> q;

    while (q--)
    {
        for (auto &i : arr)
            cin >> i;

        long long l = -1, r = 1e9;

        while (r - l > 1)
        {
            long long mid = (l + r) / 2;
            (solve(mid)) ? l = mid : r = mid;
        }

        cout << l << endl;
    }
}