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
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;
        sort(arr.begin(), arr.end(), greater<int>());

        bool allSame = arr[0] == arr[n - 1];

        if (allSame)
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            swap(arr[1], arr[n - 1]);
            for (auto &i : arr)
                cout << i << " ";
        }
        cout << endl;
    }
}