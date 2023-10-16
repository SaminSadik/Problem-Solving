#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
string pi = "314159265358979323846264338327";

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
    	string s; cin >> s;
    	int ans = 0;
    	for(int i=0; i<s.size(); i++)
    	{
    		if(s[i] != pi[i]) break;
    		ans++;
    	}
    	cout << ans << endl;
    }

    return 0;
}