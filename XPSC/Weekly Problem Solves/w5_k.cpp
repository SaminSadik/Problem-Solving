#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

auto dis(int x1, int y1, int x2, int y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int Px, Py, Ax, Ay, Bx, By;
        cin >> Px >> Py >> Ax >> Ay >> Bx >> By;

        double ans = INT_MAX,
        OA = dis(0,0,Ax,Ay),
        OB = dis(0,0,Bx,By),
        PA = dis(Px,Py,Ax,Ay),
        PB = dis(Px,Py,Bx,By),
        AB = dis(Ax,Ay,Bx,By)/2;
        
        ans = min({ans,max(OA,PA),max(OB,PB),
              max({AB,PA,OB}),max({AB,OA,PB})});

        cout <<fixed<<setprecision(10)<< ans << endl;
    }

    return 0;
}