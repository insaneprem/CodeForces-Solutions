#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int ans = 0;
        int prev = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            ans = max(ans, abs(val - prev));
            prev = val;
        }
        ans = max(ans, 2 * (x - prev));
        cout << ans << " ";
    }
}