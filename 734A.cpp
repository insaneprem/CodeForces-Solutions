#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string str;
    cin >> str;

    int an = 0;
    int da = 0;

    for (auto i : str)
    {
        if (i == 'A')
            an++;
        else
            da++;
    }

    if (an > da)
        cout << "Anton" << endl;
    else if (da > an)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}