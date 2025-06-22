#include <bits/stdc++.h>
using namespace std;
int solve(string &num)
{
    int n = num.size();
    int ans = INT_MAX;

    auto calculate_steps = [&](char d1, char d2)
    {
        int r = n - 1;
        while (r >= 0 && num[r] != d2)
            r--;
        if (r < 0)
            return INT_MAX;

        int l = r - 1;
        while (l >= 0 && num[l] != d1)
            l--;

        if (l < 0)
            return INT_MAX;

        return (n - r - 1) + (r - l - 1);
    };

    ans = min(ans, calculate_steps('0', '0'));
    ans = min(ans, calculate_steps('5', '0'));
    ans = min(ans, calculate_steps('2', '5'));
    ans = min(ans, calculate_steps('7', '5'));

    return ans;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        cout << solve(num) << '\n';
    }

    return 0;
}