#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> ans;
        int num;
        cin >> num;
        int a = 1;

        while (num)
        {
            int dig = num % 10;
            if (a * dig != 0)
            {
                ans.push_back(a * dig);
            }
            num = num / 10;
            a = a * 10;
        }
        cout << ans.size() << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
}