#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, q;
    cin >> n >> q;

    priority_queue<long long> arr;

    for (long long i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        arr.push(val);
    }

    vector<long long> query(n + 2, 0);
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        query[l]++;
        query[r + 1]--;
    }

    for (long long i = 1; i <= n; i++)
        query[i] = query[i - 1] + query[i];

    priority_queue<long long> qa;

    for (long long i = 1; i <= n; i++)
        qa.push(query[i]);

    long long ans = 0;
    while (!qa.empty() && !arr.empty())
    {
        ans += qa.top() * arr.top();
        qa.pop();
        arr.pop();
    }

    cout << ans;
}