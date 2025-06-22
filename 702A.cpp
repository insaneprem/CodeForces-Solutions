#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxlen = 0;
    int len = 0;
    int prev = 0;

    while (n--)
    {
        int a;
        cin >> a;

        if (a > prev)
            len++;
        else
            len = 1;

        prev = a;
        maxlen = max(maxlen, len);
    }
    cout << maxlen;
}