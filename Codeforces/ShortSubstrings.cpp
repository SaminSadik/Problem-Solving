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
        string b, a = "";
        cin >> b;
        for(int i=0; i<b.size(); i+=2)
        {
            a += b[i];
            if(!i) i--;
        }
        cout << a << endl;
    }

    return 0;
}