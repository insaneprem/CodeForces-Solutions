#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
  int n;
  cin >> n;

  string str;
  cin >> str;

  string ans = "";

  for (int i = 0; i < n; i++)
  {
    if (ans.size() % 2 == 0)
      ans += str[i];
    else
    {
      while (str[i] == ans.back())
        i++;
      ans += str[i];
    }
  }

  if (ans.size() % 2 == 1)
    cout << "YES";
  else
    cout << ans;
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
  // cin>>t;
  while (t--)
  {
    solve();
    cout << "\n";
  }
}