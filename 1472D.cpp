#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, val;
    cin >> n;

    priority_queue<int> odd;
    priority_queue<int> even;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val % 2)
            odd.push(val);
        else
            even.push(val);
    }

    int bob = 0, alice = 0;
    bool alflag = true;
    bool bobflag = false;
    while (!odd.empty() && !even.empty())
    {
        if (alflag)
        {
            if (odd.top() > even.top())
                odd.pop();
            else
            {
                alice += even.top();
                even.pop();
            }
            alflag = false;
            bobflag = true;
        }
        else if (bobflag)
        {
            if (even.top() > odd.top())
                even.pop();
            else
            {
                bob += odd.top();
                odd.pop();
            }
            bobflag = false;
            alflag = true;
        }
    }
    while (!even.empty())
    {
        if (alflag)
            alice += even.top();

        alflag = !alflag;
        even.pop();
    }

    while (!odd.empty())
    {
        if (bobflag)
            bob += odd.top();

        bobflag = !bobflag;
        odd.pop();
    }

    if (alice == bob)
        cout << "Tie";
    else if (alice > bob)
        cout << "Alice";
    else
        cout << "Bob";

    cout << "\n";
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    // t=1;
    while (t--)
        solve();
}