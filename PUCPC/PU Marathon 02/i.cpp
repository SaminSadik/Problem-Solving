#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    
    int curr, next, prev = -1, preC = 0, curC = 1, ans = 0;
    cin >> curr;
    for(int i=1; i<n; i++)
    {
        cin >> next;
        if(next == curr) curC++;
        else if(next == prev)
        {
            prev = curr;
            curr = next;
            preC += curC;
            curC = 1;
        } else {
            ans = max(ans, curC+preC);
            preC = curC;
            curC = 1;
            prev = cur;
            cur = next;
        }
    }
    cout << max(ans, curC+preC);

    return 0;
}