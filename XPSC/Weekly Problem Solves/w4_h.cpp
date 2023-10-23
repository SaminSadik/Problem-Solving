#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int solve()
{
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    if(c == 'g') return 0;

    vector<int> source, destination;
    for(int i=0; i<n; i++)
    {
        if(s[i]==c) source.push_back(i);
        if(s[i]=='g') destination.push_back(i);
    }
    if(source.back() > destination.back()){
    destination.push_back(n+destination[0]);}

    int ans = 0;
    
    for(int i=0, j=0; i<source.size(); i++)
    {
        while(destination[j] < source[i]) j++;
        int distance = destination[j] - source[i];
        ans = max(distance, ans);
    }

    return ans;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) cout << solve() << endl;

    return 0;
}