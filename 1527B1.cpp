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
        int n;
        cin >> n;
        string str;
        cin >> str;

        int zero = 0;

        for (auto i : str)
        {
            if (i == '0')
                zero++;
        }

        if (zero == 0)
            cout << "DRAW";
        if (zero == 1)
        {
            cout << "BOB";
        }
        else if (n % 2 == 1 && zero % 2 == 1)
            cout << "ALICE";
        else
            cout << "BOB";

        cout << endl;
    }
}