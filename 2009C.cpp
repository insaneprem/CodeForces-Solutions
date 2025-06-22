#include <bits/stdc++.h>
using namespace std;
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
        long double x, y, k;
        cin >> x >> y >> k;

        int step1 = ceil(x / k);
        int step2 = ceil(y / k);

        cout << (max(2 * step1 - 1, 2 * step2)) << '\n';
    }
}