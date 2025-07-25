#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;    // complexity O(n)
    cin >> n; // complexity O(1)

    for (int i = 0; i <= sqrt(n); i++) // complexity O(sqrt(n))
    {

        if (n % i == 0)
        {

            cout << i << " " << n / i << endl; // complexity O(1)
        }
    }

    return 0;
}