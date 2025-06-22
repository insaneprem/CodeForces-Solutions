#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 0; i <= n - 3; i++)
    {
        if (s[i] == '.')
            cnt++;
        string str = s.substr(i, 3);

        if (str == "...")
        {
            cout << 2;
            return 0;
        }
    }

    cout << cnt;
}
