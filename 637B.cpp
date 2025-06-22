#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;

   vector<string> arr(n);
   map<string, int> mpp;

   for (int i = 0; i < n; i++)
      cin >> arr[i];

   for (auto i = arr.rbegin(); i != arr.rend(); i++)
   {
      string ele = *i;
      if (mpp[ele] != 1)
      {
         cout << ele << endl;
         mpp[ele] = 1;
      }
   }
   return 0;
}