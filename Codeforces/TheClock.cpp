#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int X;

string convert_time(string s)
{
    int m = (((int)s[0]-'0')*10 + ((int)s[1]-'0'))*60 + (((int)s[3]-'0')*10 + ((int)s[4]-'0'));
    int time = ((m+X>=1440)?((m+X)-1440):(m+X));
    int xH = time/60, xM = time%60;
    string x = "";
    if(xH<10) x += ("0" + to_string(xH));
    else x += to_string(xH);
    x += ":";
    if(xM<10) x += ("0" + to_string(xM));
    else x += to_string(xM);
    return x;
}
bool is_Palindrome(string s)
{
    if(s[0]==s[4] && s[1]==s[3]) return true;
    else return false;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s >> X;
        string x = convert_time(s);
        int ans = 0;
        while(x != s)
        {
            if(is_Palindrome(x)) ans++;
            x = convert_time(x);
        }
        if(is_Palindrome(s)) ans++;
        cout << ans << endl;
    }

    return 0;
}