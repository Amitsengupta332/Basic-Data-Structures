#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    // int fre[100];
    // fre[5] = 20;
    mp["sakib"] = 2;
    mp["rakib"] = 3;
    mp["tamim"] = 1;

    // cout << mp["sakib"] << endl;

    // for(auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if(mp.count("sakib") > 0)
        cout << "Ache" << endl;
    else
        cout << "Nai" << endl;
    return 0;
}