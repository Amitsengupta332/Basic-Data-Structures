#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character after reading n
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        getline(cin, v[i]); // Use getline to read strings with spaces
    }

    for(string s : v){
        cout << s << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    
  
    return 0;
}