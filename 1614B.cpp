#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
  int n;
  cin >> n;
  priority_queue<pair<int, int>> pq;

  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;

    pq.push({val, i + 1});
  }

  vector<int> ans(n + 1, 0);
  int val = 1;
  int res = 0;
  while (!pq.empty())
  {
    ans[pq.top().second] = val;
    res += 2 * abs(val) * pq.top().first;
    pq.pop();

    if (!pq.empty())
    {
      ans[pq.top().second] = -val;
      res += 2 * abs(val) * pq.top().first;
      pq.pop();
    }

    val++;
  }

  cout << res << "\n";
  for (auto i : ans)
    cout << i << " ";
  cout << "\n";
}
signed main()
{
  // Humare saath Shree Raghunath to kisi baat ki chinta nahi

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  // t=1;
  while (t--)
    solve();
}