#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        cout << ((n % 2 == 1 && k % 2 == 0) ? "NO" : "YES");
        cout << endl;
    }
}