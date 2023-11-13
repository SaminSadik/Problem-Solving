#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
#define A2Z for(int i=0; i<26; i++)

int sol()
{
    int n; cin >> n;
    string s; cin >> s;
    int f[26] = {0};
    for(char c: s) f[c-'a']++;
    
    int c = 0, pal = 0;
    A2Z { if(f[i]) c++; }
    if(s.size()%2)
    {
        if(c==1) return 2;
        int odd = 0;
        A2Z { if(f[i]%2) odd++; }
        if(odd==1) pal++;
    }
    else
    {
        if(c==1) return 1;
        bool flag=1;
        A2Z { if(f[i]%2) flag=0; }
        if(flag) pal++;
    }
    return (!pal ? 0 : 1);
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << sol() << endl;

    return 0;
}