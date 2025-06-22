#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        int l = n;
        for (int i = 2; i * i <= l; i++)
        {
            if (n % i == 0)
                arr.push_back(i), n = n / i;
            if (arr.size() == 2)
            {
                arr.push_back(n);
                break;
            }
        }
        if (arr.size() < 3)
            cout << "NO";
        else if ((arr[0] == arr[2]) || (arr[1] == arr[2]))
            cout << "NO";
        else
        {
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
        }
        cout << endl;
    }
}