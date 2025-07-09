#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v; // type 1: default initialization
    // vector<int> v(5); // type 2: initialization with size
    // vector<int> v(10, -1);  // type 3: initialization with value
    // vector<int> v2(v);  // type 4: copy initialization

    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5); // type 5: initialization with array

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; 
        /* code */
    }
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " "; // Output: -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    //     /* code */
    // }

    // cout << v.size() << endl;

    return 0;
}