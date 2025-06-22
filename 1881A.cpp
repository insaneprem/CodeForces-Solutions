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
        int n, m;
        cin >> n >> m;

        string s, x;
        cin >> x;
        cin >> s;

        bool flag = false;

        for (int i = 0; i < 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                cout << i << endl;
                flag = true;
                break;
            }
            x += x;
        }

        if (!flag)
            cout << -1 << endl;
    }

    return 0;
}
