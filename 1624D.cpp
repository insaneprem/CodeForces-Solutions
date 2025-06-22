#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        map<char, long long> mpp;

        for (auto i : str)
            mpp[i]++;

        long long cnt = 0;
        for (auto i : mpp)
            cnt += (i.second % 2 == 0 ? i.second : i.second - 1);

        long long left = n - cnt;
        long long need = k - (cnt % k);

        if (left >= need && (cnt / k) % 2 == 0)
            cout << cnt / k + 1;
        else
            cout << cnt / k;

        cout << endl;
    }
}