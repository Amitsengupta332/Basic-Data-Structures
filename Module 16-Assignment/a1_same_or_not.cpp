#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    stack<int> s;
    queue<int> q;

    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (a != b)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            same = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}