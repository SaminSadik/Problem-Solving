#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;

    for(int str=1, sps=(n/2)+5; str<(n+11); str+=2, sps--)
    {
        int sp = sps, st = str;
        while(sp--) cout << " ";
        while(st--) cout << "*";
        cout << endl;
    }
    for(int I=0; I<5; I++)
    {
        for(int i=0; i<5; i++) cout << " ";
        for(int i=0; i<n; i++) cout << "*";
        cout << endl;
    }

    return 0;
}

// the stick is 5* long
// has 5* on bothsides from the corner of the stick in each side on of lowest row of leaves
// N is the thickness of the stick
// leaves start from 1 star and increments by 2 each layer
