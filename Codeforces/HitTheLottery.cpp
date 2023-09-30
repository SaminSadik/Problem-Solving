#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n, Count = 0;
    cin >> n;

    if(n>=100)
    {
        Count += (n/100);
        n %= 100;
    }
    if(n>=20)
    {
        Count += (n/20);
        n %= 20;
    }
    if(n>=10)
    {
        Count += (n/10);
        n %= 10;
    }
    if(n>=5)
    {
        Count += (n/5);
        n %= 5;
    }
    if(n) Count += n;
    
    cout << Count;

    return 0;
}