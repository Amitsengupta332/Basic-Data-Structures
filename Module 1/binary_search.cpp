#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] == x)
            {
                flag = 1;
            }
            /* code */
        }

        if (flag == 1)
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }

        /* code */
    }

    return 0;
}