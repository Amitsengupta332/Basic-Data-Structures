#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    list<int> l = {10,20 ,30, 40};
    list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(50);
    // l.push_front(5);

    // l.pop_back();
    // l.pop_back();
    for(int val:l)
    {
        cout << val << endl;
    }
    // for(int val:l2)
    // {
    //     cout << val << endl;
    // }
    return 0;
}