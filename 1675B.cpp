#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        int ans = 0;
        int i;
        for (i = n - 2; i >= 0; i--)
        {
            if (arr[i + 1] == 0)
                break;

            while (arr[i] >= arr[i + 1])
            {

                arr[i] /= 2;
                ans++;
            }
        }

        if (i >= 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}