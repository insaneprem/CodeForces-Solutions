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
        string str;
        cin >> str;

        stack<char> st;

        for (auto i : str)
        {
            if (!st.empty() && i == 'B' && (st.top() == 'A' || st.top() == 'B'))
                st.pop();
            else
                st.push(i);
        }
        cout << st.size() << endl;
    }
}