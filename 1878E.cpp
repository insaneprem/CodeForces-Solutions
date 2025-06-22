#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &i : arr)
    cin >> i;

  int q;
  cin >> q;

  while (q--)
  {
    int l, k;
    cin >> l >> k;

    if (arr[l - 1] < k)
      cout << -1 << " ";
    else
    {
      int r = l - 1;
      int op = arr[l - 1];
      while (op >= k && r < n)
      {
        r++;
        op = op & arr[r];
      }

      cout << r << " ";
    }
  }
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