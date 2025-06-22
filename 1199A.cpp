#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr(a);
    for (int i = 0; i < a; i++)
        cin >> arr[i];

    for (int i = 0; i < a; i++)
    {
        bool flag = true;
        for (int j = max(0, i - b); j <= min(a - 1, i + c); j++)
        {
            if (j == i)
                continue;

            if (arr[j] < arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}