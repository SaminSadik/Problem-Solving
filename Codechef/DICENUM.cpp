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

        sort(a, a+3);
        sort(b, b+3);
        int A = a[0] + (a[1]*10) + (a[2]*100),
        B = b[0] + b[1]*10 + b[2]*100;

        if(A>B) cout << "Alice";
        else if(B>A) cout << "Bob";
        else cout << "Tie";
        cout << endl;
    }

    return 0;
}