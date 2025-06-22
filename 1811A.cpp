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
        int n, d;
        cin >> n >> d;

        string str;
        cin >> str;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (str[i] - '0' < d)
            {
                str.insert(i, to_string(d));
                flag = true;
                break;
            }
        }

        if (!flag)
            str.insert(n, to_string(d));

        cout << str << endl;
    }
}