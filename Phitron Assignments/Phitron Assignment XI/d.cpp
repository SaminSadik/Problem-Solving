#include <bits/stdc++.h>
using namespace std;

const int N = 1003;
int dp[N][N];

bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if(s == 0) return true;
        else return false;
    }
    if (dp[n][s] != -1) return dp[n][s];

    bool o1 = subset_sum(n-1, a, s); // exclude
    if(a[n-1] <= s)
    {
        bool o2 = subset_sum(n-1, a, s-a[n-1]); // include
        return (dp[n][s] = (o1 || o2));
    }
    else return (dp[n][s] = o1);
}
 
int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int target = 1000 - m;

        for(int i=0; i<N; i++) for(int j=0; j<=target; j++) dp[i][j] = -1;

        if(subset_sum(n, a, target)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}