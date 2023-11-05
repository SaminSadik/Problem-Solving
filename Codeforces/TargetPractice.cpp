#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        vector<string> s(10);
        for(int i=0; i<10; i++) cin >> s[i];
        int pts = 0;
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(s[i][j]=='X')
                {
                    if(i==0 || i==9 || j==0 || j==9) pts += 1;
                    else if(((i==1 || i==8) && (i>0 && i<9)) || ((j==1 || j==8) && (j>0 && j<9))) pts += 2;
                    else if(((i==2 || i==7) && (i>1 && i<8)) || ((j==2 || j==7) && (j>1 && j<8))) pts += 3;
                    else if(((i==3 || i==6) && (i>2 && i<7)) || ((j==3 || j==6) && (j>2 && j<7))) pts += 4;
                    else pts += 5;
                }
            }
        }
        cout << pts << endl;
    }

    return 0;
}