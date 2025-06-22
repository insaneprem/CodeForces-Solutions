#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int m, sum = 0;
        cin >> m;

        while (m--)
        {
            int a;
            cin >> a;
            sum += a;
        }

        cout << arr[sum % n] << endl;
    }
}