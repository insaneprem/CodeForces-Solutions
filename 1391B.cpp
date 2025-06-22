#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                char a;
                cin >> a;
                if (i == n && a != 'R')
                    ans++;
                else if (j == m && a != 'D')
                    ans++;
            }
        }
        cout << ans - 1 << endl;
    }
}