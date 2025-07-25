#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //Congratulations, you passed the sample test case.

// Click the Submit Code button to run your code against all the test cases.

// Compile Time
// Compile Message

// Solution.cpp: In function ‘int main()’:
// Solution.cpp:17:26: warning: comparison of integer expressions of different signedness: ‘size_t’ {aka ‘long unsigned int’} and ‘int’ [-Wsign-compare]
//      for (size_t i = 1; i < n; i++)
//                         ~~^~~

  if (n == 0) return 0;




    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> pre(n);
    pre[0] = a[0];

    for (size_t i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    reverse(pre.begin(), pre.end());

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;



    return 0;
}