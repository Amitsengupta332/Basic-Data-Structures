#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> l;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string s;
            cin >> s;
            l.push(s);
        }
        else if (x == 1)
        {

            if (!l.empty())
            {
                cout << l.front() << endl;
                l.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
       
        }
    }

    return 0;
}