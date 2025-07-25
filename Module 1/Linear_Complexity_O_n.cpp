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

// 
/*
readme.md file 
# Linear Complexity O(n)
This code demonstrates linear complexity O(n) in C++. It reads an integer `n` and prints numbers from 1 to `n` with a step of 2, showcasing how the complexity grows linearly with the input size.
## Example Usage
To run the code, compile it with a C++ compiler and provide an integer input. The program will output numbers from 1 to `n` with a step of 2.   
## Complexity Analysis
The complexity of the code is O(n)  , where `n` is the input integer. The loop iterates `n/2` times, leading to linear growth in execution time as `n` increases.
## Related Information
This code is part of a series demonstrating different complexities in algorithms, including O(1), O(log n), and O(n log n).     
*/