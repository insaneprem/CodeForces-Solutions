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
        string a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;

        for (int i = 0; i < a.size() - 1; i++)
        {
            if ((a[i] == '0' && b[i] == '0') && (a[i + 1] == '1' && b[i + 1] == '1'))
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }
}