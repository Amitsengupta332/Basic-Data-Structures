#include <bits/stdc++.h>
using namespace std;

int main()
{

    // list<int> l;
    // list<int> l(10);
    // list<int> l(10,5);

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2 = l;

    int a[] = {1,2,3};
    list<int> l3(a, a+3);

    vector<int> v = {10,20,30};
    list<int> l4(v.begin(), v.end());
    // range based for loop
    for (int val : l4)
    {
        cout << val << endl;
    }
    // for (int val : l3)
    // {
    //     cout << val << endl;
    // }
    // for (int val : l2)
    // {
    //     cout << val << endl;
    // }
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // cout << *l.begin() << endl;
    // cout << l.size() << endl;
    return 0;
}