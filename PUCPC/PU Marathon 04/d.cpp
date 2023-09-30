#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int h, m;
    cin >> h >> m;

    bool extra = false;

    if(m<45) 
    {
        m += 15;
        extra = true;
    }
    else m -= 45;

    if(extra)
    {
        if(h>0) h--;
        else h = 23;
    }

    cout << h << " " << m;

    return 0;
}