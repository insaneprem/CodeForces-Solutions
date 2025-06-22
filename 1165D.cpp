#include <bits/stdc++.h>
using namespace std;

long long finnd(vector<long long> &arr)
{
    sort(arr.begin(), arr.end());

    long long mini = arr[0];
    long long maxi = arr[arr.size() - 1];

    long long num = mini * maxi;

    vector<long long> ans;
    for (long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ans.push_back(i);
            if (i != (num / i))
                ans.push_back(num / i);
        }
    }

    sort(ans.begin(), ans.end());

    if (ans == arr)
        return num;

    else
        return -1;
}
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

        long long num = finnd(arr);

        cout << num << endl;
    }
}
