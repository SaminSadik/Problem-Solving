#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int a, b, c;
    cin >> a >> b >> c;
    cout<<max({(a+b*c),(a*b+c),(a*b*c),(a+b+c),((a+b)*c),(a*(b+c))});
/*     
    int maximum = 0;
    if(maximum < (a+b*c)) maximum = (a+b*c);
    if(maximum < (a*b+c)) maximum = (a*b+c);
    if(maximum < ((a+b)*c)) maximum = ((a+b)*c);
    if(maximum < (a*(b+c))) maximum = (a*(b+c));
    if(maximum < (a*b*c)) maximum = (a*b*c);
    if(maximum < (a+b+c)) maximum = (a+b+c);
    cout << maximum << endl;
*/  
    return 0;
}