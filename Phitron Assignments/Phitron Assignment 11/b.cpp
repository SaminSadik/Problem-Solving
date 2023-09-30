#include <bits/stdc++.h>
using namespace std;

bool dp[100001];

bool Reach(int n)
{
    if(n == 1) return true;

    dp[1] = true;
    for(int i=1; i<=n; i++)
    {
        int o1 = i + 3, o2 = i * 2;

        if(dp[i])
        {
            if(o1 <= n) dp[o1] = true;
            if(o2 <= n) dp[o2] = true;
        }
    }

    return dp[n];
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        if(Reach(n)) cout << "YES\n";
        else cout << "NO" << endl;
    }

    return 0;
}