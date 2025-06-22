#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
struct Node
{
    int left = 0, right = 0, answer = 0;
    Node(int a, int b, int c)
    {
        left = a;
        right = b;
        answer = c;
    }
};

struct segmentTree
{
    int n;
    vector<Node> segTree;

    void init(int x)
    {
        this->n = x;
        segTree.resize(4 * n, Node(0, 0, 0));
    }

    Node merge(Node a, Node b)
    {
        int val = min(a.left, b.right);

        int left = a.left + b.left - val;
        int right = a.right + b.right - val;
        int ans = val + a.answer + b.answer;
        return Node(left, right, ans);
    }

    void build(int start, int end, int index, string &s)
    {
        if (start == end)
        {
            segTree[index].left = (s[start] == '(');
            segTree[index].right = (s[start] == ')');
            return;
        }

        int mid = (start + end) / 2;
        int left = 2 * index;
        int right = 2 * index + 1;

        build(start, mid, left, s);
        build(mid + 1, end, right, s);

        segTree[index] = merge(segTree[left], segTree[right]);
    }
    Node query(int start, int end, int l, int r, int index)
    {
        if (start > r || end < l)
            return Node(0, 0, 0);

        if (start >= l && end <= r)
        {
            return segTree[index];
        }

        int mid = (start + end) / 2;

        Node q1 = query(start, mid, l, r, 2 * index);
        Node q2 = query(mid + 1, end, l, r, 2 * index + 1);

        return merge(q1, q2);
    }

    void build(string &s)
    {
        build(0, n - 1, 1, s);
    }

    Node query(int l, int r)
    {
        return query(0, n - 1, l, r, 1);
    }
};

void solve()
{
    string str;
    cin >> str;

    segmentTree Tree;
    Tree.init(str.size());
    Tree.build(str);

    int q;
    cin >> q;

    while (q--)
    {
        int left, right;
        cin >> left >> right;

        cout << 2 * Tree.query(left - 1, right - 1).answer << "\n";
    }
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        // cout<<"\n";
    }
}