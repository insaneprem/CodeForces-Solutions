#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << "I hate" << " ";
        else
            cout << "I love" << " ";

        if (i == n - 1)
            cout << "it";
        else
            cout << "that" << " ";
    }
}