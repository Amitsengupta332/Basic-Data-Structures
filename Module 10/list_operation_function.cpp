#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 50, 40, 60, 80, 10, 70, 100, 10, 90, 10, 10};
    // l.remove(10);
    // l.sort(greater<int>()); // decending
    // l.sort();

    // l.unique();
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}