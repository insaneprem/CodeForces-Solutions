#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if (n <= 9)
        return n;

    string str = to_string(n);
    int len = str.size();

    int a = (len - 1) * 9;

    return str[0] - '0' + a;
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
        int n;
        cin >> n;

        cout << solve(n) << " ";
    }
}