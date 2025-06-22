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
        long long a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c) % 9 == 0)
        {
            if (min({a, b, c}) >= (a + b + c) / 9)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";
        cout << endl;
    }
}