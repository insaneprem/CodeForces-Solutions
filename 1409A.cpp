#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int req = abs(a - b);

        int operations = (req / 10) + (req % 10 != 0 ? 1 : 0);
        cout << operations << endl;
    }
}