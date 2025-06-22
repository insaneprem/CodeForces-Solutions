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
        long long n;
        cin >> n;
        vector<long long> arr(n);

        for (auto &i : arr)
            cin >> i;

        bool pos = (arr[0] > 0) ? true : false;

        long long sum = 0;

        long long i = 0;

        long long maxele = INT_MIN;
        while (i < arr.size())
        {
            if (pos)
            {
                while (arr[i] > 0 && i < arr.size())
                {
                    maxele = max(maxele, arr[i]);
                    i++;
                }
                sum += maxele;
                maxele = INT_MIN;
                pos = !pos;
            }
            else
            {
                while (arr[i] < 0 && i < arr.size())
                {
                    maxele = max(maxele, arr[i]);
                    i++;
                }
                sum += maxele;
                maxele = INT_MIN;
                pos = !pos;
            }
        }
        cout << sum << endl;
    }
}