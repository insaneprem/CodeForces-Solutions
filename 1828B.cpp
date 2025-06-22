#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n + 1, 0);

        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = __gcd(ans, abs(i - arr[i]));
        }

        cout << ans << endl;
    }
}