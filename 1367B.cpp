#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] % 2 == 1)
                    odd++;
            }
            else
            {
                if (arr[i] % 2 == 0)
                    even++;
            }
        }
        if (odd != even)
        {
            cout << -1 << endl;
        }
        else
            cout << odd << endl;
    }
}