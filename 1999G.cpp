#include <bits/stdc++.h>
using namespace std;

int query(int a, int b)
{
    map<pair<int, int>, int> mpp;

    if (mpp.find({a, b}) != mpp.end())
        return mpp[{a, b}];

    cout << "? " << a << " " << b << endl;
    int area;
    cin >> area;

    return mpp[{a, b}] = area;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int l = 1, r = 1000;

        while (r - l > 1)
        {
            int mid = (l + r) / 2;

            (mid * mid == query(mid, mid)) ? l = mid : r = mid;
        }

        cout << "! " << r << endl;
    }
}