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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        bool flag = find(arr.begin(), arr.end(), k) != arr.end();

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
