#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
    	int n, s, r;
    	cin >> n >> s >> r;
    	vector<int> ans(n, 1);
    	ans[n-1] = (s-r);
    	r -= (n-1);
    	for(int i=0; i<(n-1); i++)
    	{
    		int x = min(ans[n-1]-ans[i], r);
        	ans[i] += x;
        	r -= x;
    	}
    	for(int a : ans) cout << a << " ";
    	cout << endl;
    }

    return 0;
}