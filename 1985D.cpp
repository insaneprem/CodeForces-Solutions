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
        int n, m;
        cin >> n >> m;
        int t = INT_MAX;
        int b = INT_MIN;
        int l = INT_MAX;
        int r = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                char ch;
                cin >> ch;

                if (ch == '#')
                {
                    if (i < t)
                        t = i;
                    if (i > b)
                        b = i;
                    if (j > r)
                        r = j;
                    if (j < l)
                        l = j;
                }
            }
        }

        cout << (t + b) / 2 << " " << (r + l) / 2 << endl;
    }
}