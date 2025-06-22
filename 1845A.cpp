#include <iostream>
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
        int n, k, x;
        cin >> n >> k >> x;
        if (x == 1 && k == 1)
            cout << "NO" << endl;
        else if (x == 1)
        {
            if (n % 2 == 1)
            {
                if (k <= 2)
                    cout << "NO" << endl;
                else
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < (n / 2) - 1; i++)
                        cout << 2 << " ";
                    cout << 3;
                    cout << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < (n / 2); i++)
                    cout << 2 << " ";
                cout << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
    }
}