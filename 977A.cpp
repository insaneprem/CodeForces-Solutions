#include <iostream>
using namespace std;
int main()
{
    int k;
    int num;
    cin >> num >> k;

    while (k--)
    {
        if (num % 10 == 0)
            num = num / 10;
        else
            num--;
    }
    cout << num << endl;
    return 0;
}