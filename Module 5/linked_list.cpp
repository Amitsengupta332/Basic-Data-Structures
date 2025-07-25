#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

int main()
{
    // int a[5] = {1, 2, 3, 4, 5};
    // cout << (uintptr_t)&a[2] << " " << (uintptr_t)&a[3];

    vector<int> a = {1, 2, 3, 4, 5};
    cout << (uintptr_t)&a[2] << " " << (uintptr_t)&a[3];
    return 0;
}