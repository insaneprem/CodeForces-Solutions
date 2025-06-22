#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 0)
        cout << 1;
    else
    {
        int num = n % 4;
        if (num == 1)
            cout << 8;
        else if (num == 2)
            cout << 4;
        else if (num == 3)
            cout << 2;
        else
            cout << 6;
    }
}
