#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            if (s.length() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            unordered_map<char, int> char_to_num;
            unordered_map<int, char> num_to_char;
            bool flag = true;

            for (int i = 0; i < n; i++)
            {
                char ch = s[i];
                int num = arr[i];

                if (char_to_num.count(ch) && char_to_num[ch] != num)
                {
                    flag = false;
                    break;
                }

                if (num_to_char.count(num) && num_to_char[num] != ch)
                {
                    flag = false;
                    break;
                }

                char_to_num[ch] = num;
                num_to_char[num] = ch;
            }

            cout << (flag ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
