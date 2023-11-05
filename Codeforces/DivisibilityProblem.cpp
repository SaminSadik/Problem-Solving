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
        int a, b, move=0;
        cin >> a >> b;
        if(a<=b)
        {
            move = b-a;
        }
        else if(a%b)
        {
            double x = (double) a/b;
            move = ceil(x)*b - a;
        }
        cout << move << endl;
    }

    return 0;
}