#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    int prev = arr[0];
    int len = 0;
    int maxlen = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;
        if (arr[i] == 1 + prev)
        {
            len++;
            maxlen = max(maxlen, len);
        }
        else
            len = 0;

        prev = arr[i];
    }

    if (len >= 2)
        cout << "YES";
    else
        cout << "NO";
}