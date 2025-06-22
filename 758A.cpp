#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    int ele = *max_element(arr.begin(), arr.end());

    int ans = 0;

    for (auto i : arr)
    {
        ans += ele - i;
    }

    cout << ans;
}