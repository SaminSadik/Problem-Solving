#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int longestSubarrayWithSumK(vector<int> a, long long k) 
{
    int m = 0;
    long long s = 0;
    
    for(int i=0, j=0; j<a.size(); j++)
    {
        s += a[j];
        while(s > k)
        {
            s -= a[i];
            i++;
        }
        if(s == k) m = max((j-i+1), m);
    }
    return m;
}

signed main()
{
    SSK

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    cout << longestSubarrayWithSumK(a, k) << endl;

    return 0;
}