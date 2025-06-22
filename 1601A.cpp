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
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        vector<int> freq(32, 0);

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < 32; i++)
            {
                if ((1 << i) & arr[j])
                    freq[i]++;
            }
        }

        int r = 0;
        for (auto i : freq)
            r = __gcd(r, i);

        for (int i = 1; i <= n; i++)
        {
            if (r % i == 0)
                cout << i << " ";
        }
        cout << endl;
    }
}