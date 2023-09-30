#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        a = "00" + a;
        b = "00" + b;
        int Sa = a.size()-1, Sb = b.size()-1;
        int x = (a[Sa]-'0')*(((b[Sb-1]-'0')*10)+(b[Sb]-'0')),
        y = (a[Sa-1]-'0') * (b[Sb]-'0') * 10;

        x %= 100; y %= 100;
        x += y;
        x %= 100;
        cout << x << endl;
     }

    return 0;
}