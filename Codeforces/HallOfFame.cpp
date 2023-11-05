#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        short f1=0, f2=0;
        for(int i=0, j=1; i<n/2; i++, j++)
        {
            if(s[i]=='R') f1=1;
            if(s[n-j]=='L') f2=1;
        }

        int ans = 0;

        if(f1==1 && f2==1) cout << "0\n";
        else if(f1==0 || f2==0)
        {
            for(int i=0; i<n; i++)
            {
                if(f1==0 && (s[i]=='L' && s[i+1]=='R'))
                {
                    ans = i+1;
                    break;
                }
                else if(f2==0 && (s[i]=='L' && s[i+1]=='R'))
                {
                    ans = i+1;
                    break;
                }
                else if(s[(n-1)/2] != s[((n-1)/2)+1])
                {
                    ans = ((n-1)/2)+1;
                }
            }
            if(ans==0) cout << "-1\n";
            else cout << ans << endl;
        }
    }

    cout << flush;
    return 0;
}
