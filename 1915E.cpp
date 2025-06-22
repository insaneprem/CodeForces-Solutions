#include <bits/stdc++.h>
using namespace std;

bool ispresent(vector<long long> &arr)
{
    map<long long, long long> mpp;
    long long sum = 0;

    for (auto i : arr)
    {
        sum += i;

        if (sum == 0)
            return true;

        if (mpp.find(sum) != mpp.end())
            return true;

        mpp[sum] = 1;
    }

    return false;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for (auto &i : arr)
            cin >> i;

        for (long long i = 0; i < n; i++)
            arr[i] = (i % 2 == 0) ? arr[i] : -arr[i];

        bool flag = ispresent(arr);
        cout << (flag ? "YES" : "NO");
        cout << endl;
    }
}
