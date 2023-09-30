#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int x = max(a,b), y = min(a,b);
        cout << pow(max(x, 2*y), 2) << endl;
    }

    return 0;
}