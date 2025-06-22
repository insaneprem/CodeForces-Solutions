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
        string str;
        cin >> str;
        int n = str.size();
        bool one = false;
        int oneind = -1;
        bool zero = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1' && str[i + 1] == '1')
            {
                one = true;
                oneind = i + 1;
                break;
            }
        }
        if (one == false)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = oneind + 1; i < n - 1; i++)
        {
            if (str[i] == '0' && str[i + 1] == '0')
            {
                zero = true;
                break;
            }
        }
        if (one && zero)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}