#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {10, 20, 30, 40};
    list<int> l2 = {100, 200, 300, 400};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.clear();

    // l.push_back(50);
    // l.push_front(5);

    // l.pop_back();
    // l.pop_back();

    // l.insert(next(l.begin(), 2), 100);
    l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    // cout << *next(l.begin(), 2) << endl;
    for (int val : l)
    {
        cout << val << endl;
    }
    // for(int val:l2)
    // {
    //     cout << val << endl;
    // }
    return 0;
}