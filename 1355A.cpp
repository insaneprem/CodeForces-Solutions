#include <bits/stdc++.h>
using namespace std;
long long solve(long long num)
{
    long long minnum = 1e9;
    long long maxnum = -1e9;

    while (num)
    {
        if (minnum == 0 && maxnum == 9)
            break;
        long long dig = num % 10;
        minnum = min(minnum, dig);
        maxnum = max(maxnum, dig);
        num = num / 10;
    }

    return minnum * maxnum;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, k;
        cin >> a >> k;
        long long curr = a;
        long long next = a;
        k = k - 1;
        while (k--)
        {
            next = curr;
            long long x = solve(curr);
            if (x == 0)
            {
                break;
            }
            next += x;
            curr = next;
        }
        cout << next << endl;
    }
}