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
        string str, pattern;
        cin >> str >> pattern;

        string ans = "";
        map<char, int> mpp;

        for (auto ch : pattern)
            mpp[ch]++;

        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (mpp.count(str[i]) && mpp[str[i]] > 0)
            {
                ans += str[i];
                mpp[str[i]]--;
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ((pattern == ans) ? "YES" : "NO");
        cout << '\n';
    }

    return 0;
}
