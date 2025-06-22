#include <bits/stdc++.h>
using namespace std;
long long get_sum(long long start, long long element)
{
    // sum=(r-l+1)*(l+r)/2;
    long long sum = (element * start) + (element * (element - 1)) / 2;
    return sum;
}
long long difference(long long start, long long element, long long total)
{
    long long prefix = get_sum(start, element);
    long long suffix = get_sum(start + element, total - element);

    // cout<<prefix-suffix;

    return prefix - suffix;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long element, start;
        cin >> element >> start;

        long long l = -1, r = 1e9;

        while (r - l > 1)
        {
            long long mid = (l + r) / 2;
            (difference(start, mid, element) >= 0) ? r = mid : l = mid;
        }

        long long ans = abs(difference(start, r, element));
        if (r > 0)
            ans = min(ans, abs(difference(start, r - 1, element)));

        cout << ans << '\n';
    }
}
