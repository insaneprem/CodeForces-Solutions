#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   long long t;
   cin >> t;

   while (t--)
   {
      long long d;
      cin >> d;

      long long a, b;

      for (long long i = 1 + d;; i++)
      {
         long long cnt = 0;
         for (long long j = 2; j * j <= i; j++)
         {
            if (i % j == 0)
               cnt++;
         }
         if (cnt == 0)
         {
            a = i;
            break;
         }
      }

      for (long long i = a + d;; i++)
      {
         long long cnt = 0;
         for (long long j = 2; j * j <= i; j++)
         {
            if (i % j == 0)
               cnt++;
         }
         if (cnt == 0)
         {
            b = i;
            break;
         }
      }

      cout << a * b << endl;
   }
}