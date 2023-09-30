#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n, ans = 0;
    cin >> n;
    while(n--)
    {
        string s; cin >> s;
        if(s=="Cube") ans += 6;
        else if(s=="Tetrahedron") ans += 4;
        else if(s=="Octahedron") ans += 8;
        else if(s=="Dodecahedron") ans += 12;
        else if(s=="Icosahedron") ans += 20;
    }
    cout << ans << endl;

    return 0;
}