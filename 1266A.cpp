#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<string> ans;
   while (n--)
   {
      int num;
      cin >> num;
      int sum = 0;
      bool flag = false;
      while (num)
      {
         int dig = num % 10;
         if (dig % 2 == 0 && dig != 0)
            flag = true;
         sum += dig;
         num = num / 10;
      }
      if (sum % 3 == 0 && flag)
         ans.push_back("red");
      else
         ans.push_back("cyan");
   }

   for (auto i : ans)
      cout << i << endl;
}