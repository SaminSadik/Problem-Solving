#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    string s; cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(i+1 < s.size())
        {
            if((s[i]=='.') && (s[i+1] == '.' || s[i+1]=='-')) cout << 0;
            else if(s[i]=='-' && s[i+1]=='.') { cout << 1; i++; }
            else if(s[i]=='-' && s[i+1]=='-') { cout << 2; i++; }
        }
        else cout << 0;
    }

    return 0;
}