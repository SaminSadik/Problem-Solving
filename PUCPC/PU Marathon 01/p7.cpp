#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    for(int i=1; i<=t; i++)
    {
        int a, b, c, ans;
        cin >> a >> b >> c;
        if((c>=a && a>=b) || (b>=a && a>=c)) ans = a;
        else if((a>=b && b>=c) || (c>=b && b>=a)) ans = b;
        else if((a>=c && c>=b) || (b>=c && c>=a)) ans = c;
        cout << "Case " << i << ": " << ans << endl;
    }

    return 0;
}