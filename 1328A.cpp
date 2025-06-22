#include <iostream>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b;
      cin >> a >> b;

      if (a % b == 0)
         cout << 0;
      else if (a < b)
         cout << b - a;
      else
      {
         int x = a / b;
         int ans = b * (x + 1) - a;
         cout << ans;
      }
   }
}