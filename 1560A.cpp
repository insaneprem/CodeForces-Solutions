#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> arr(1671, 0);
    for (int i = 0; i <= 1670; i += 3)
    {
        arr[i] = 1;
    }
    for (int i = 3; i <= 1670; i += 10)
    {
        arr[i] = 1;
    }

    vector<int> ans;
    for (int i = 1; i <= 1670; i++)
    {
        if (arr[i] == 0)
            ans.push_back(i);
    }
    while (t--)
    {
        int k;
        cout << ans[k - 1];
    }
}