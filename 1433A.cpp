#include <iostream>
using namespace std;
int solve(int num)
{
    int ndig = 0;
    while (num)
    {
        ndig++;
        num = num / 10;
    }

    if (ndig == 1)
        return 1;
    else if (ndig == 2)
        return 3;
    else if (ndig == 3)
        return 6;
    else if (ndig == 4)
        return 10;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;

        int dig = num % 10;
        int ans = (dig - 1) * 10 + solve(num);

        cout << ans << endl;
    }
}