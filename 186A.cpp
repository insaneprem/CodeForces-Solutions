#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    if(a.size() != b.size()){
        cout<<"NO";
        return 0;
    }
    int diff = 0;
    int ind1 = -1;
    int ind2 = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (diff > 2)  break;
        if (a[i] != b[i]){
            diff++;
            if (ind1 == -1) ind1 = i;
            else ind2 = i;
        }
    }

    if (diff == 2 && a[ind1] == b[ind2] && a[ind2] == b[ind1])
        cout << "YES";
    else
        cout << "NO";
}