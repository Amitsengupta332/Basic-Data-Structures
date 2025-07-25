#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    // complexity O(1)
    cin >> n; // complexity O(1)

    for (int i = 1; i <= n; i *= 2) // complexity O(log n)
    {
        cout << i << " ";
        /* code */
    }

    return 0;
}