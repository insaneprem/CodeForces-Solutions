#include <bits/stdc++.h>
using namespace std;

string str;
const long long mod1 = 1e9 + 7;
const long long mod2 = 1e9 + 9;
const long long p1 = 53;
const long long p2 = 127;

void solve()
{
    long long n = str.size();

    vector<long long> hash1(n, 0);
    vector<long long> hash2(n, 0);
    vector<long long> pow1(n, 1);
    vector<long long> pow2(n, 1);

    hash1[0] = (str[0] - 'a' + 1);
    hash2[0] = (str[0] - 'a' + 1);

    for (long long i = 1; i < n; i++)
    {
        pow1[i] = (pow1[i - 1] * p1) % mod1;
        pow2[i] = (pow2[i - 1] * p2) % mod2;

        hash1[i] = (hash1[i - 1] * p1 + (str[i] - 'a' + 1)) % mod1;
        hash2[i] = (hash2[i - 1] * p2 + (str[i] - 'a' + 1)) % mod2;
    }

    bool found = false;
    long long largestLength = 0;

    for (long long i = 1; i < n; i++)
    {
        long long hash1prefix = hash1[i - 1];
        long long hash2prefix = hash2[i - 1];

        long long hash1suffix = (hash1[n - 1] - (hash1[n - i - 1] * pow1[i]) % mod1 + mod1) % mod1;
        long long hash2suffix = (hash2[n - 1] - (hash2[n - i - 1] * pow2[i]) % mod2 + mod2) % mod2;

        if (hash1prefix == hash1suffix && hash2prefix == hash2suffix)
        {
            largestLength = i;
            found = true;
        }
    }

    if (found && largestLength > n / 2)
    {
        cout << "YES" << endl;
        cout << str.substr(0, largestLength) << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    solve();
}
