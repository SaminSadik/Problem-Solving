#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int a[3], b[3];

        for(int i=0; i<3; i++) cin >> a[i];
        for(int i=0; i<3; i++) cin >> b[i];

        sort(a,a+3);
        sort(b,b+3);

        int alice = (a[2]*100) + (a[1]*10) + a[0],
        bob = (b[2]*100) + (b[1]*10) + b[0];

        if(alice==bob) cout << "Tie";
        else if(alice<bob) cout << "Bob";
        else cout << "Alice";
        
        cout << endl;
    }

    return 0;
}