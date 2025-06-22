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

        cout << ((arr[0] == 1) ? "YES" : "NO");
        cout << endl;
    }
}