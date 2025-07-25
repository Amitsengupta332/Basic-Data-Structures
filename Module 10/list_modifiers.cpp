#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {10, 20, 30, 40, 20, 20, 70, 20, 90};
    // list<int> l = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // list<int> l2 = {100, 200, 300, 400};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.clear();

    // l.push_back(50);
    // l.push_front(5);

    // l.pop_back();
    // l.pop_back();

    // l.insert(next(l.begin(), 2), 100);
    // l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));

    // replace(l.begin(), l.end(), 20, 100);


    auto it= find(l.begin(), l.end(), 20);
    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // cout << *next(l.begin(), 2) << endl;
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }
    // for(int val:l2)
    // {
    //     cout << val << endl;
    // }
    return 0;
}