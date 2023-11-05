#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if((a==b+c)||(b==a+c)||(c==b+a)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}