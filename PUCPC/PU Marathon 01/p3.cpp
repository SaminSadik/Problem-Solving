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
        int n; cin >> n;
        int mini = 100, maxi = -1;
        while(n--)
        {
            int x; cin >> x;
            if(x<mini) mini = x;
            if(x>maxi) maxi = x;
        }
        cout << (maxi-mini)*2 << endl;
    }

    return 0;
}