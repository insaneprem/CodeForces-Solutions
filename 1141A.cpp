#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int res = -1;
    if (n == m)
        cout << -1;
    else if (m % n == 0)
    {
        res = 0;
        int d = m / n;
        while (d % 2 == 0)
            res++, d = d / 2;
        while (d % 3 == 0)
            res++, d = d / 3;

        if (d != 1)
            res = -1;
    }

    cout << res << endl;
    return 0;
}
