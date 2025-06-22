#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
   int n;
   cin >> n;

   map<int, int> mpp;
   for (int i = 0; i < n; i++)
   {
      int val;
      cin >> val;

      mpp[val]++;
   }

   int seg = 0;
   int prevnum = -1;
   int prevfreq = 0;
   for (auto i : mpp)
   {
      if (i.first == prevnum + 1)
      {
         if (i.second > prevfreq)
            seg += i.second - prevfreq;
      }
      else
         seg += i.second;

      prevfreq = i.second;
      prevnum = i.first;
   }

   cout << seg;
}
signed main()
{
   // Humare saath Shree Raghunath to kisi baat ki chinta nahi

   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int t = 1;
   cin >> t;
   while (t--)
   {
      solve();
      cout << "\n";
   }
}