#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int c = 0;
        vector<int> ones;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1') c++;
            else if(c>0)
            {
                ones.push_back(c);
                c = 0;
            }
        }
        if(c>0) ones.push_back(c);
        sort(ones.begin(), ones.end(), greater<int>());

        int zaza = 0;
        for(int i=0; i<ones.size(); i+=2) zaza += ones[i];
        cout << zaza << endl;
    }

    return 0;
}