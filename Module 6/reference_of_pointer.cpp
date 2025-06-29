#include <bits/stdc++.h>
using namespace std;

void fun(int* &p)
{

    p = NULL;
    // int y = 200;
    // p = &y;
    // cout << "IN fun:" << *p << endl;
    // cout << "IN fun:" << &p << endl;
    // cout << "IN fun:" << &p << endl;
}

int main()
{

    int x = 10;
    int *p = &x; // Pointer to x
    fun(p);
    // cout << *p << endl;
    // cout << "IN main:" << *p << endl;
    // cout << "IN main:" << &p << endl;
    cout << "IN main:" << p << endl;
    // cout << x << endl;
    return 0;
}