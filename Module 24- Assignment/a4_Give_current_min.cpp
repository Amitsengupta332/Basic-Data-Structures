#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            int X;
            cin >> X;
            mp[X]++;                            
            cout << mp.begin()->first << "\n";  
        }
        else if (type == 1)
        {
            if (mp.empty())
                cout << "Empty\n";
            else
                cout << mp.begin()->first << "\n";
        }
        else if (type == 2)
        {
            if (mp.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                 
                auto it = mp.begin();
                it->second--;
                if (it->second == 0)
                    mp.erase(it);

                if (mp.empty())
                    cout << "Empty\n";
                else
                    cout << mp.begin()->first << "\n";
            }
        }
    }
    return 0;
}