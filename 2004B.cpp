#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
  int l, r, L, R;
  cin >> l >> r >> L >> R;

  int inter = min(r, R) - max(l, L) + 1;
  int ans = inter - 1;
  if (inter <= 0)
    ans = 1;
  else
  {
    ans += (l != L);
    ans += (r != R);
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