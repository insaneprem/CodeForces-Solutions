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

        map<int, int> mpp;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mpp[val]++;
        }

        if (mpp.size() > 2)
            cout << "NO";
        else if (mpp.size() == 1)
            cout << "YES";
        else
        {
            auto it = mpp.begin();
            int a = it->second;
            it++;
            int b = it->second;

            if (abs(a - b) > 1)
                cout << "NO";
            else
                cout << "YES";
        }
        cout << endl;
    }

    return 0;
}
