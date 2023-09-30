#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;

        if(x==y)
        {
            if(x%2) cout << "CHEF\n";
            else cout << "CHEFINA\n"; 
        }
        else
        {
            if(min(x, y)%2)
            {
                if((y-x)>1) cout << "CHEFINA\n"; 
                else cout << "CHEF\n";
            }
            else
            {
                if((x-y)>1) cout << "CHEF\n"; 
                else cout << "CHEFINA\n";
            }
        }
    }

    return 0;
}
