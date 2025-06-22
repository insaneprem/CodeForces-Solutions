#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long n = 1;

        long long round = 0;
        while (a > b)
        {
            int n = a;
            for (long long i = 2; i <= n; i++)
            {
                while (n % i == 0)
                {
                    n = n / i;
                    round++;
                }
            }
            a--;
        }

        cout << round << endl;
    }
}