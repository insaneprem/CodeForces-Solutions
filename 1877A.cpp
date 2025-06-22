#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int val = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int input;
            cin >> input;
            val += input;
        }
        cout << (val - (2 * val)) << " ";
    }
}