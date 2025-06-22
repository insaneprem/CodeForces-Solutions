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

        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            st.insert(val);
        }

        bool one = 0, two = 0, zero = 0;

        for (auto i : st)
        {
            if (i == 1)
                one = 1;
            else if (i == 0)
                zero = 1;
            else if (i == 2)
                two = 1;
        }

        if (one && (two || zero))
            cout << "NO";
        else if (one)
        {
            bool present = 0;
            for (auto i : st)
            {
                if (st.find(i - 1) != st.end())
                {
                    present = 1;
                    cout << "NO";
                    break;
                }
            }

            if (!present)
                cout << "YES";
        }
        else
            cout << "YES";

        cout << endl;
    }
}