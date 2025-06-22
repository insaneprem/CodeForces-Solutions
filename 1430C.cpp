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
        vector<int> ans;
        int mean = n;
        ans.push_back(n);
        ans.push_back(n - 1);
        n = n - 2;
        while (n >= 1)
        {
            ans.push_back(mean);
            ans.push_back(n);
            mean = ceil((mean + n) / 2);
            n = n - 1;
        }
        cout << mean << endl;
        for (int i = 0; i < ans.size() - 1; i = i + 2)
        {
            cout << ans[i] << " " << ans[i + 1] << endl;
        }
    }
}