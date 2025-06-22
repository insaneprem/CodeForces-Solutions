#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(4);

        for (auto &i : arr)
            cin >> i;

        int high = -1;
        int prev = -1;
        int indhigh = -1;
        int indsechigh = -1;

        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > high)
            {
                prev = high;
                high = arr[i];
                indsechigh = indhigh;
                indhigh = i;
            }
            else if (arr[i] <= high && arr[i] > prev)
            {
                prev = arr[i];
                indsechigh = i;
            }
        }

        if (indsechigh >= 2 && indhigh < 2 || indsechigh < 2 && indhigh >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}