#include <iostream>
using namespace std;
int solve(int x, int a, int b)
{
    int res = min(2 * a * x, x * b);
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;

        int ans = 0;
        if (x > y)
        {
            ans += (x - y) * a;
        }
        else if (y > x)
            ans += (y - x) * a;

        ans += solve(x, a, b);

        cout << ans << endl;
    }
}