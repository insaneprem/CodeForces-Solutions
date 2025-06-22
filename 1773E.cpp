#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    vector<int> brr;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int val;
            cin >> val;
            arr[i].push_back(val);
            brr.push_back(arr[i][j]);
        }
    }

    sort(brr.begin(), brr.end());

    int split = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size() - 1; j++)
        {
            int k = lower_bound(brr.begin(), brr.end(), arr[i][j]) - brr.begin();
            if (k == brr.size() - 1 || arr[i][j + 1] != brr[k + 1])
                split++;
        }
    }

    cout << (split - n) << " " << (split - 1) << '\n';
}