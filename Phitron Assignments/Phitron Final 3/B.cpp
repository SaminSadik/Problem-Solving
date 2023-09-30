#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s; getline(cin, s);
        string w;
        stringstream ss(s);
        map<string, int> Count;
        pair<string, int> most; most.second = 0;
        while(ss >> w)
        {
            Count[w]++;
            if(Count[w] > most.second)
            {
                most.second = Count[w];
                most.first = w;
            }
        }
        /* for(auto it = Count.begin(); it != Count.end(); it++)
        {
            if(it->second > most.second)
            {
                most.second = it->second;
                most.first = it->first;
            }
        } */
        cout << most.first << " " << most.second << endl;

    }

    return 0;
}