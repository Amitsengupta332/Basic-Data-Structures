#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int val) // O(1)
    {
        l.push_back(val);
    }

    void pop() // O(1)
    {
        l.pop_front();
    }

    int front() // O(1)
    {
        return l.front();
    }

    int back() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }

    bool empty() // O(1)
    {
        return l.empty();
    }
};

int main()
{

    int a, b;
    cin >> a >> b;

    myStack s;
    myQueue q;

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