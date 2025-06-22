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

        int one, two;
        two = one = n / 3;

        if (n % 3 == 1)
            one++;
        if (n % 3 == 2)
            two++;

        cout << one << " " << two << endl;
    }
}