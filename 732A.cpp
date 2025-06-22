#include <iostream>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int i = 1;
    for (i;; i++)
    {
        if (k * i % 10 == 0 || (k * i - r) % 10 == 0)
            break;
    }
    cout << i;
}