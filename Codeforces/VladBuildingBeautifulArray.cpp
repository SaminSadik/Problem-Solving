#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;
        int even=0, odd=0, mineven=INT_MAX, minodd=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            if(a%2)
            {
                odd++;
                if(a<minodd) minodd = a;
            }
            else 
            {
                even++;
                if(a<mineven) mineven = a;
            }
        }

        if((even==n) || (odd==n)) cout << "YES\n";
        else if(mineven>minodd) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}