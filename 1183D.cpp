#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
   int n;
   cin >> n;

   map<int, int> mp;

   for (int i = 0; i < n; i++)
   {
      int val;
      cin >> val;
      mp[val]++;
   }

   priority_queue<int> pq;

   for (auto i : mp)
      pq.push(i.second);

   int prev_max = INT_MAX;
   int ans = 0;

   while (!pq.empty())
   {
      int ele = pq.top();
      pq.pop();

      if (ele < prev_max)
      {
         ans += ele;
         prev_max = ele;
      }
      else
      {
         ans += prev_max - 1;
         prev_max -= 1;
      }

      if (prev_max == 0)
         break;
   }

   cout << ans << '\n';
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