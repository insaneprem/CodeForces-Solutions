#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (1)
    {
        if (a > b)
            break;
        cnt++;
        a = a * 3;
        b = b * 2;
    }
    cout << cnt << endl;
    return 0;
}