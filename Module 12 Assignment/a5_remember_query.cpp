#include <bits/stdc++.h>
using namespace std;



int main()
{
    int q;
    cin >> q;

    list<int> l;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < l.size())
            {
                auto it = l.begin();
                for (int i = 0; i < v; ++i)
                {
                    ++it;
                }
                l.erase(it);
            }
        }

                // Print L -> left to right
        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;

        // Print R -> right to left
        cout << "R -> ";
        for (auto it = l.rbegin(); it != l.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}