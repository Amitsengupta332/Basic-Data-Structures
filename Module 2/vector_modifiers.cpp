#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};
    // vector<int> v2 = {100, 200, 300};
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // v.insert(v.begin() + 2, 100);

    // v.erase(v.begin() + 1, v.begin() + 5);
    //  replace(v.begin(), v.end(), 2, 100);
    //  replace(v.begin(), v.end()-2, 2, 100);

    // auto it = find(v.begin(), v.end(), 5);
    // cout << *it << endl;
    // if ( it == v.end()){
    //     cout << "Not found" << endl;
    // }else{
    //     cout << "found" << endl;
    // }

    // v.pop_back();
    // v.pop_back();
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
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

    for (auto it = v.begin(); it <v.end(); it++)
    {
        cout << *it << " ";
        /* code */
    }
    

    return 0;
}