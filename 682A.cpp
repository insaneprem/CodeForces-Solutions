#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    vector<long long> arr(5, 0), brr(5, 0);

    for (long long i = 1; i <= n; i++)
    {
        arr[i % 5]++;
    }
    for (long long i = 1; i <= m; i++)
    {
        brr[i % 5]++;
    }

    long long ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans += arr[i] * brr[(5 - i) % 5];
    }

    cout << ans << endl;
    return 0;
}
