#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> num(4);
        for (int i = 0; i < 4; i++)
            cin >> num[i];

        int n = num[3];
        num.pop_back();
        sort(num.begin(), num.end());

        int ans = 0;
        ans += num[2] - num[0];
        ans += num[2] - num[1];
        if (n < ans)
            cout << "NO" << endl;
        else if ((n - ans) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}