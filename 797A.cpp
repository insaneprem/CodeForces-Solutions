#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    int num = n;

    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ans.push_back(i);
            n = n / i;
        }
    }
    if (n > 1)
        ans.push_back(n);

    if (k > ans.size())
        cout << -1;
    else
    {
        int val = 1;
        for (int i = 0; i < k - 1; i++)
        {
            cout << ans[i] << " ";
            val *= ans[i];
        }

        cout << num / val;
    }
}