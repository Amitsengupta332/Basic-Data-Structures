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

    sort(arr, arr + n);

    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        int flag = 0;
        // Using binary search

        // Using binary search
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        // linear search
        // for (int i = 0; i < n; i++)
        // {

        //     if (arr[i] == x)
        //     {
        //         flag = 1;
        //     }
        //     /* code */
        // }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }

        /* code */
    }

    return 0;
}