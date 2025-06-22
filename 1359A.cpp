#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;

        cin >> n >> m >> k;

        int ppcard = n / k;

        if (m <= ppcard)
            cout << m << endl;
        else
        {
            int remjoker = m - ppcard;
            int val = ceil(static_cast<double>(remjoker) / (k - 1));

            if (val >= m)
                cout << 0 << endl;
            else
                cout << ppcard - val << endl;
        }
    }
}