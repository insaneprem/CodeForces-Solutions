#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    int n = str.size();

    vector<int> arr(26, -1);
    for (int i = 0; i < n; i++)
        arr[str[i] - 'a'] = i;

    string temp, ans;
    int i = 0, curr = 0;

    while (i < n)
    {
        while (i < n && i <= arr[curr])
        {
            temp += str[i];
            while (!temp.empty() && temp.back() - 'a' == curr)
            {
                ans += temp.back();
                temp.pop_back();
            }
            i++;
        }
        curr++;
        while (!temp.empty() && temp.back() - 'a' <= curr)
        {
            ans += temp.back();
            temp.pop_back();
        }
    }
    reverse(temp.begin(), temp.end());
    ans += temp;

    cout << ans << '\n';
}
