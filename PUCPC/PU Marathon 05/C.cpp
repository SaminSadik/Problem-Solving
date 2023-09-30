#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if((n>2) && ((a+b+c) >= n) && (a>0 && b>0 && c>0)) cout << "YES";
    else cout << "NO";

    return 0;
}