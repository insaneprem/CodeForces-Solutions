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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        vector<int> freq(31, 0);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < 31; j++)
                if (arr[i] & (1 << j))
                    freq[j]++;

        for (int i = 30; i >= 0; i--)
        {
            int rem = n - freq[i];
            if (k >= rem)
                freq[i] += rem, k -= rem;
        }

        long long ans = 0;
        for (int i = 0; i < 31; i++)
            if (freq[i] == n)
                ans += pow(2, i);

        cout << ans << endl;
    }
}