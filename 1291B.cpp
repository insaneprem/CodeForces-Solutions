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

        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= i)
                left[i] = 1;
            else
                break;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= n - 1 - i)
                right[i] = 1;
            else
                break;
        }

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (left[i] && right[i])
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO");
        cout << endl;
    }
}