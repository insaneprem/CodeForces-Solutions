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

        map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mpp[a]++;
        }

        int maxfreq = 0;
        int dist = 0;
        for (auto i : mpp)
        {
            maxfreq = max(maxfreq, i.second);
            dist++;
        }

        if (dist == maxfreq)
            cout << maxfreq - 1 << endl;
        else if (dist < maxfreq)
            cout << dist << endl;
        else
            cout << maxfreq << endl;
    }
}