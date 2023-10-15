#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        
        s[0] = (char) tolower(s[0]);

        if(s[0]=='m')
        {
            string S; S += s[0];
            for(int i=1; i<n; i++) 
            {
                s[i] = tolower(s[i]);

                if(s[i]!=s[i-1]) S += s[i];
            }
            if(S=="meow") cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }

    return 0;
}