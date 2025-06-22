#include <bits/stdc++.h>
using namespace std;
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
        long long n, m;
        cin >> n >> m;

        priority_queue<long long> index;
        vector<long long> cost(m + 1, 0);
        for (long long i = 0; i < n; i++)
        {
            long long val;
            cin >> val;
            index.push(val);
        }

        for (long long i = 1; i <= m; i++)
            cin >> cost[i];

        long long i = 1;

        long long money = 0;
        while (!index.empty())
        {
            long long ind = index.top();
            index.pop();

            if (cost[ind] <= cost[i])
                money += cost[ind];
            else
            {
                money += cost[i];
                i++;
            }
        }

        cout << money << " ";
    }
}