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

        int last = *max_element(arr.begin(), arr.end());
        int freq = count(arr.begin(), arr.end(), last);

        if (freq == n)
            cout << -1 << endl;
        else
        {
            cout << n - freq << " " << freq << endl;
            for (auto i : arr)
                if (i != last)
                    cout << i << " ";
            cout << endl;
            for (int i = 0; i < freq; i++)
                cout << last << " ";
        }
    }
}