#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;

        vector<int> cons(100, 0);
        int index = 0, zaza = 0;

        if(s[0]=='1') cons[index]++;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i]=='1' && cons[index]==0) cons[index]++;

            if(s[i]=='1' && s[i-1]=='1') cons[index]++;

            if(s[i]=='0') index++;
        }
        sort(cons.begin(), cons.end(), greater<int>());

        for(int i=0; i<=index; i+=2) zaza += cons[i];
        cout << zaza << endl;
    }

    return 0;
}