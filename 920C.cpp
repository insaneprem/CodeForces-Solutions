#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    string str;
    cin >> str;

    vector<int> pre(str.size() + 2, 0);

    for (int i = 1; i <= str.size(); i++)
        pre[i] = (str[i - 1] - '0') + pre[i - 1];

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > i)
        {
            if (pre[arr[i] - 1] - pre[i - 1] != arr[i] - i)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
}