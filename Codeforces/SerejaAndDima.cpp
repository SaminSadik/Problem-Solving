#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }

    int sereja=0, dima=0;
    for(int i=1; n; i++)
    {
        if(a[0]>=a[n-1])
        {
            (i%2) ? sereja += a[0] : dima += a[0] ;
            a.erase(a.begin());
        }
        else
        {
            (i%2) ? sereja += a[n-1] : dima += a[n-1] ;
            a.erase(a.end()-1);
        }
        n--;
    }
    cout << sereja << " " << dima;

    return 0;
}