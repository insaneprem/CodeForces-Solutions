#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int maxi = max(a, b);
        int mini = min(a, b);
        int cnt = 0;

        while (maxi <= c && mini <= c)
        {
            if (mini < maxi)
                mini += maxi;
            else
                maxi += mini;

            cnt++;
        }
        cout << cnt << endl;
    }
}