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
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        if (str.size() < 2 * k + 1)
        {
            cout << "NO" << endl;
            continue;
        }

        int i = 0;
        int j = str.size() - 1;
        bool flag = true;
        while (k--)
        {
            if (str[i] != str[j])
            {
                flag = false;
                break;
            }
            i++;
            j--;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}