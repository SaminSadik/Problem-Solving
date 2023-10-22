#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

void pE() { cout << "="; }
void pL() { cout << ">"; }
void pS() { cout << "<"; }

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int x = a.size()-1, y = b.size()-1;
        if(a[x]==b[y])
        {
            if(x==y) pE();
            else if(a[x]=='S') { (x>y) ? pS() : pL(); }
            else if(a[x]=='L') { (x<y) ? pS() : pL(); }
        }
        else if(a[x]=='S' && b[y]=='L') pS();
        else if(a[x]=='L' && b[y]=='S') pL();
        else if(a[x]=='S' || b[y]=='L') pS();
        else if(a[x]=='L' || b[y]=='S') pL();
        cout << endl;
    }

    return 0;
}