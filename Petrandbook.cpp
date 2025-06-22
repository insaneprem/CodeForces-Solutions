#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> day(7);

    for (int i = 0; i < 7; i++)
        cin >> day[i];
    int i = 0;
    while (n > 0)
    {
        n = n - day[i];
        if (n <= 0)
        {
            cout << i + 1;
            break;
        }
        i = (i + 1) % 7;
    }
    return 0;
}
