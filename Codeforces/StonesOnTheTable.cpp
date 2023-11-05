#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin>>n;
    string s; cin>>s;

    int i = 0, Count = 0;
    while(i<n)
    {
        if(s[i]==s[i+1])
        {
            s.erase(s.begin()+i);
            n--;
            Count++;
        }
        else i++;
    }

    cout << Count;

    return 0;
}