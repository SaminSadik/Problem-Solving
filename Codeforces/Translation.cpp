#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    string s1, s2, s3;
    cin >> s1 >> s2;

    for(int i=s1.size()-1; i>=0; i--) s3 += s1[i];
    
    if(s2==s3) cout << "YES";
    else cout << "NO";

    return 0;
}