#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n, m;
    cin >> n >> m;
    bool t = true;
    for(int i=0; i<n; i++)
    {
        if(i%2)
        {
            for(int j=0; j<m; j++)
            {
                if((t && (j==m-1)) || (!t && (j==0))) cout << "#";
                else cout << ".";
            }
            if(t) t = false;
            else t = true;
        }
        else for(int j=0; j<m; j++) cout << "#";

        cout << endl;
    }

    return 0;
}