#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    string s1, s2;
    cin >> s1 >> s2;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]==s2[i]) cout<< "0";
        else cout << "1";
    }

    return 0;
}