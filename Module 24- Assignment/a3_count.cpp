#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        unordered_map<string, int> freq;
        string word;

        string result = "";
        int maxFreq = 0;

        while (ss >> word)
        {
            freq[word]++;

            if (freq[word] > maxFreq)
            {
                maxFreq = freq[word];
                result = word;
            }
        }

        cout << result << " " << maxFreq << endl;
    }

    return 0;
}