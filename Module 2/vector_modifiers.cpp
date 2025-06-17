#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {100, 200, 300};
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // v.insert(v.begin() + 2, 100);

    v.erase(v.begin() + 1, v.begin() + 5);

    // v.pop_back();
    // v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }
    // vector<int> v2;
    // v2 = v;
    //    for (int i = 0; i < v2.size(); i++)
    //    {
    //     cout << v2[i] << " ";
    //     /* code */
    //    }

    //  Range based for loop
    // for (int x : v2)
    // {
    //     cout << x << " ";
    // }

    return 0;
}