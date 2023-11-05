#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int a, b;
    cin >> a >> b;
    int x = (a<=b ? a : b), y = (a>=b ? a : b);
    cout << x << " " << (y-x)/2;

    return 0;
}