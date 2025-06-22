#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
        }
        else
        {
            if (flag)
            {
                arr[i] = (arr[i] + 1) / 2;
            }
            else
            {
                arr[i] = (arr[i] - 1) / 2;
            }
            flag = !flag;
        }
    }

    for (auto i : arr)
    {
        cout << i << endl;
    }

    return 0;
}
