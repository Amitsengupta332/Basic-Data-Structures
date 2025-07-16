#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int val;
    cin >> val;

    while (val != -1)
    {
        l.push_back(val);
        cin >> val;
    }

    l.sort();
    l.unique();

    for (int v : l)
    {
        cout << v << " ";
    }

    return 0;
}