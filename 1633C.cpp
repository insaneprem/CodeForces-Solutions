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

        double hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;

        double timehero = ceil(hc / dm);
        double timemonster = ceil(hm / dc);

        if (timehero >= timemonster)
            cout << "YES" << endl;
        else
        {
            bool flag = false;
            for (double i = 0; i <= k; i++)
            {
                double extrahealth = i * a;
                double extraattack = (k - i) * w;

                double newtimehero = ceil((hc + extrahealth) / dm);
                double newtimemons = ceil(hm / (dc + extraattack));

                if (newtimehero >= newtimemons)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}