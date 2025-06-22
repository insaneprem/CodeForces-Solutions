#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int i = 1;
        int tower = 1;
        while (n > 1)
        {
            int card_need = (i * 2) + (i - 1);
            if (n >= card_need)
            {
                n -= card_need;
                i++;
            }
            else
            {
                tower++;
                i = 1;
            }
        }
        cout << tower << endl;
    }
}