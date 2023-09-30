#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int R = 1000001;
    vector<bool> prime(R, true);
    prime[0] = prime[1] = false;
    for(ll i=2; i*i < R; i++)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<R; j+=i) prime[j] = false;
        }
    }

    int n; cin >> n;
    while(n--)
    {
        ll t; cin >> t;

        ll root = sqrt(t);
        if((root*root == t) && prime[root])
            cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

/// TLE on test 33! ///
/*
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int ans[n] = {0};

    for(int i=0; i<n; i++)
    {
        int t; cin >> t;
        bool flag = false;

        int root = sqrt(t);
        if((root*root == t) && (t > 1))
        {
            flag = true;

            int range = ceil(sqrt((double)t));
            for(int j=2; j <= range; j++)
            {
                if((t%j == 0) && (j != root))
                {
                    flag = false;
                    break;
                }
            }
            if(flag) ans[i] = 1;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(ans[i]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
*/