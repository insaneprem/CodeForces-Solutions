#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        string str;
        cin >> str;

        switch (str[0])
        {
        case 'I':
            ans += 20;
            break;
        case 'C':
            ans += 6;
            break;
        case 'D':
            ans += 12;
            break;
        case 'T':
            ans += 4;
            break;
        case 'O':
            ans += 8;
            break;
        }

    }
    cout<<ans;
}