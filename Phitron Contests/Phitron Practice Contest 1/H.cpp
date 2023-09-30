#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int num;
    string subs, ans = "";

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]>='1' && s[i]<='9') num = (int) s[i] - '0';

        if(s[i]>='a' && s[i]<='z') subs += s[i];

        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||(i+1) == s.size())
        {
            while(num--) ans += subs;
            if((i+1) != s.size()) ans += s[i];
            subs = "";
        }
    }
    cout << ans;

    return 0;
}