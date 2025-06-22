#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        ans.push_back(a);
    }
    sort(ans.begin(), ans.end());

    int num1 = (ans[0] + ans[1]) - ans[3];
    int num2 = ans[0] - num1;
    int num3 = ans[3] - num1 - num2;

    cout << num1 << " " << num2 << " " << num3;
}