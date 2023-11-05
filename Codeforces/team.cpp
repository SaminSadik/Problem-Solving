#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n;
    cin >> n;

    int ans = 0;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b+c) > 1) ans++;
    }
    cout << ans << endl;

    cout << flush;
    return 0;
}
