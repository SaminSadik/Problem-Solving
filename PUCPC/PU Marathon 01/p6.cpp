#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int k; cin >> k;

    while(k!=0)
    {
        int n, m; cin >> n >> m;

        for(int i=0; i<k; i++)
        {
            int x, y; cin >> x >> y;
            if(x==n || y==m) cout << "divisa\n";
            else if(x<n && y>m) cout << "NO\n";
            else if(x>n && y>m) cout << "NE\n";
            else if(x>n && y<m) cout << "SE\n";
            else if(x<n && y<m) cout << "SO\n";
        }

        cin >> k;
    }

    return 0;
}