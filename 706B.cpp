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
    sort(arr.begin(), arr.end());

    int q;
    cin >> q;
    while (q--)
    {
        int budget;
        cin >> budget;

        int can_buy = (upper_bound(arr.begin(), arr.end(), budget) - arr.begin());

        cout << can_buy << endl;
    }
}