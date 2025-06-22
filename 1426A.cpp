#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n <= 2)
            cout << "1" << endl;
        else
        {
            int ans = (n - 3) / x;
            cout << ans + 2 << endl;
        }
    }
}