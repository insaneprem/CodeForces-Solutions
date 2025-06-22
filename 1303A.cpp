#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int prev = -1;
        int len = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
            {
                if (prev != -1)
                    len += (i - prev - 1);
                prev = i;
            }
        }
        cout << len << endl;
    }
}