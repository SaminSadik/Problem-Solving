#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    for(int i=1; i<=t; i++)
    {
        int x, y;
        cin >> x >> y;
        string s; cin >> s;

        char bitmap[32][32];
        for(int i=0; i<32; i++)
        {
            for(int j=0; j<32; j++)
            {
                bitmap[i][j] = '.';
            }
        }
        bitmap[x][y] = 'o';

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='E') x++;
            else if(s[i]=='W') x--;
            else if(s[i]=='N') y++;
            else if(s[i]=='S') y--;
            else break;

            bitmap[x][y] = 'o';
        }

        cout << "Bitmap #" << i << endl;
        for(int j=31; j>=0; j--)
        {
            for(int i=0; i<32; i++)
            {
                cout << bitmap[i][j] << " ";
            }
            if(j) cout<<"\n + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + \n";
        }
    }

    return 0;
}