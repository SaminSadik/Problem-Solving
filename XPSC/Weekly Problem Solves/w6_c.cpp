#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int a, b, c, x, y;

bool solve()
{
    if(x<=a && y<=b) return true;
    int dog = x-a, cat = y-b;
    if(x>a && y>b) return (dog+cat <= c);
    else if(x>a) return (dog <= c);
    else return (cat <= c); 
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> x >> y;
        cout << (solve()?"YES":"NO") << endl;
    }

    return 0;
}