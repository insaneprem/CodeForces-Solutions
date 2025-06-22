#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> a(n);
   vector<int> b(m);

   for (int i = 0; i < n; i++)
      cin >> a[i];
   for (int i = 0; i < m; i++)
      cin >> b[i];

   sort(a.begin(), a.end());

   vector<int> ans;
   for (auto i : b)
   {
      int ind = upper_bound(a.begin(), a.end(), i) - a.begin();
      int val = (a[ind] == i) ? ind - 1 : ind;
      ans.push_back(val);
   }

   for (auto i : ans)
      cout << i << " ";
}