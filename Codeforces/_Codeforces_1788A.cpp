/* //Wrong Answer:

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int LHS(int k, int a[])
{
    int lhs = 1;
    for(int i=0; i<k; i++) lhs *= a[i];
    return lhs;
}

int RHS(int k, int n, int a[])
{
    int rhs = 1;
    for(int i=k; i<n; i++) rhs *= a[i];
    return rhs;
}

int32_t main()
{
    IOS

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int k = 1, ans = 0;
        while(k<(n-2))
        {
            if(LHS(k, a)==RHS(k, n, a))
            {
                ans = k;
                break;
            }
            else k++;
        }
        if(ans==0) cout << "-1\n";
        else cout << ans << endl;
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while (t--)
    {
        int cnt = 0, a[1005], n;
		cin >> n;
		for(int j=1;j<=n;j++)
		{
			cin >> a[j];
			if(a[j]==2) cnt++;
		}
		if(cnt%2==1) cout<<-1<<endl;
		else
		{
			int cur = 0, ans;
			for(int k=1;k<=n-1;k++)
			{
				if(a[k]%2==0) cur++;
				if(cur==cnt/2)
				{
					ans=k;
					break;
				}
			}
			cout<<ans<<endl;
		}
    }

    return 0;
}
