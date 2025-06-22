#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        arr[i] = {a, b};
    }

    sort(arr.begin(), arr.end());
    int maxi = INT_MIN;
    for (auto i : arr)
    {
        if (i.second > maxi)
            maxi = i.second;
        else if (i.second < maxi)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}