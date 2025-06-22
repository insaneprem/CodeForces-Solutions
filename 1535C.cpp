#include <bits/stdc++.h>
using namespace std;
bool isGood(long long one[], long long zero[])
{
    if (one[0] > 0 && zero[0] > 0)
        return false;
    else if (one[1] > 0 && zero[1] > 0)
        return false;
    else if (one[0] > 0 && one[1] > 0)
        return false;
    else if (zero[0] > 0 && zero[1] > 0)
        return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        long long l = 0;
        long long zero[2] = {0, 0};
        long long one[2] = {0, 0};
        long long ans = 0;

        for (long long r = 0; r < s.size(); r++)
        {
            if (s[r] == '1')
            {
                one[r % 2]++;
            }
            else if (s[r] == '0')
                zero[r % 2]++;

            while (!(isGood(one, zero)))
            {
                if (s[l] == '1')
                {
                    one[l % 2]--;
                }
                else if (s[l] == '0')
                    zero[l % 2]--;

                l++;
            }
            ans += (r - l) + 1;
        }

        cout << ans << endl;
    }
}