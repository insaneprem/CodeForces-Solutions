#include <bits/stdc++.h>
using namespace std;
int n;
map<int, int> mpp;
int query(int index)
{
    if (mpp.find(index) != mpp.end())
        return mpp[index];

    if (index == 0 || index == n + 1)
        return INT_MAX;

    cout << "? " << index << endl;
    int val;
    cin >> val;

    return mpp[index] = val;
}
int main()
{
    cin >> n;

    int l = 0, r = n + 1;

    while (r - l > 1)
    {
        int mid = (l + r) / 2;

        (query(mid - 1) > query(mid)) ? (l = mid) : (r = mid);
    }

    cout << "! " << l << endl;
}