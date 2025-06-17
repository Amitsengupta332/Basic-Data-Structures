#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.capacity() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(7);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        /* code */
    }
    
    // cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    return 0;
}