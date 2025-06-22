#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long coordinate, step;
        cin >> coordinate >> step;

        if (step % 4 == 0)
            cout << coordinate;
        else if (step % 4 == 1)
        {
            if (coordinate % 2)
                cout << coordinate + step;
            else
                cout << coordinate - step;
        }
        else if (step % 4 == 2)
        {
            if (coordinate % 2)
                cout << coordinate - 1;
            else
                cout << coordinate + 1;
        }
        else
        {
            if (coordinate % 2)
                cout << coordinate - (step + 1);
            else
                cout << coordinate + (step + 1);
        }
        cout << endl;
    }
}