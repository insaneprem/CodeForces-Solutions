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
        int n;
        cin >> n;

        string str;
        cin >> str;

        int ans = 1, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
                cnt++;
            else
                cnt = 1;

            ans = max(cnt, ans);
        }

        cout << ans + 1 << endl;
    }
}