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
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            ans.push_back(arr[i] - 1);
            ans.push_back(arr[i]);
        }

        cout << ans.size() << endl;
        for (auto i : arr)
            cout << i << " ";
        cout << endl;
    }
}