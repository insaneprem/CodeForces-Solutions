#include <bits/stdc++.h>
using namespace std;

bool isIntersect(pair<int, int> req, pair<int, int> range)
{
    if ((range.first < req.first) && (range.second < req.first))
        return false;
    else if ((req.first < range.first) && (req.second < range.first))
        return false;
    else
        return true;
}
pair<int, int> uni(pair<int, int> req, pair<int, int> range)
{
    int first = min(range.first, req.first);
    int second = max(range.second, req.second);
    return {first, second};
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, m;
        cin >> n >> x >> m;

        pair<int, int> range = {x, x};

        while (m--)
        {
            int l, r;
            cin >> l >> r;

            if (isIntersect({l, r}, range))
            {
                range = uni({l, r}, range);
            }
        }

        cout << (range.second - range.first) + 1 << " ";
    }
}