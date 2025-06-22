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
        int n;
        cin >> n;

        int two = 0;
        int three = 0;
        while (n % 2 == 0)
            two++, n /= 2;
        while (n % 3 == 0)
            three++, n /= 3;

        if (n != 1)
        {
            cout << -1 << endl;
            continue;
        }

        if (two == three)
            cout << two << endl;
        else if (two < three)
            cout << (three - two) + three << endl;
        else
            cout << -1 << endl;
    }
}