#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // complexity O(1)
    cin >> n; // complexity O(1)

    // for (int i = 1; i <=n/2; i++) // complexity O(n)
    // {
    //     cout << i << " ";
    //     /* code */
    // }

    // example
    // for (int i = 1; i <=n/2; i+=2) // complexity O(n)
    // {
    //     cout << i << " ";
    //     /* code */
    // }

    // example another 
    // for (int i = 1; i <=n; i+=2) // complexity O(n)
    // {
    //     cout << i << " ";
    //     /* code */
    // }
    for (int i = 1; i <=n; i+=2) // complexity O(n)
    {
        cout << i << " ";
        /* code */
    }

    cout << endl; // complexity O(1)
    // example
    for (int i = 1; i <=n; i++) // complexity O(n)
    {
        cout << i << " ";
        /* code */
    }
    
    return 0; // complexity O(1)
    // total complexity: O(n+n +4) but 4 does not matter in Big O notation
    // so we can say the complexity is O(n)
    // Total complexity: O(n)
}