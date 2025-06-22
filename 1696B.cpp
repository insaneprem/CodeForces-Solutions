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

        vector<int> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int segment = 0;

        for (int i = 1; i <= n; i++)
            if (arr[i] > 0 && arr[i - 1] == 0)
                segment++;

        cout << (segment <= 2 ? segment : 2);
        cout << " ";
    }
}