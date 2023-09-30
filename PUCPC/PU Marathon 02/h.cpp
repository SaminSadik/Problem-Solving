#include <bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        if((n==1 && m==1) || (n==2 && m==2)) cout<<"Chefirnemo\n";
	    else if(((n-1)%x==0 && (m-1)%y==0 && (n-1)>=0 && (m-1)>=0) ||
        ((n-2)%x==0 && (m-2)%y==0 && (n-2)>=0 && (m-2)>=0)) cout<<"Chefirnemo\n";
	    else cout<<"Pofik\n";
    }

    return 0;
} 