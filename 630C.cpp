#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  long long ans = 0;
  for (long long i = 1; i <= n; i++)
  {
    ans += pow(2, i);
  }
  cout << ans;
}