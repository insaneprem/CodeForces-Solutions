#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
   int arr[3];
   for (int i = 0; i < 3; i++)
      cin >> arr[i];

   sort(arr, arr + 3);

   int ans = abs(arr[0] - arr[1]) + abs(arr[2] - arr[1]);
   cout << ans << endl;
}