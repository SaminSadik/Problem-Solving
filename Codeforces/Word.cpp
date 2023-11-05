#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    string s;
    cin >> s;
    int sml = 0, cap = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z') sml++;
        else if(s[i]>='A' && s[i]<='Z') cap++;
    }
    if(cap>sml)
    {
        for(int i=0; i<s.size(); i++)
        {
            char tmp = toupper(s[i]);
            cout << tmp;
        }
    }
    else
    {
         for(int i=0; i<s.size(); i++)
        {
            char tmp = tolower(s[i]);
            cout << tmp;
        }
    }

    return 0;
}