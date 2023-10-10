#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int X[4] = {-1,-1,1,1}, Y[4] = {-1,1,-1,1};

bool Move(int x, int y, int move)
{
    if(move == 0) return (x>0 && y>0);
    else if(move == 1) return (x>0 && y<7);
    else if(move == 2) return (x<7 && y>0);
    else if(move == 3) return (x<7 && y<7);
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        char cb[8][8];
        pair<int, int> ans = {0,0};
        for(int i=0; i<8; i++)
        {
            string s; cin >>s;
            for(int j=0; j<8; j++) cb[i][j] = s[j];
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(cb[i][j]=='#')
                {
                    int moves = 0;
                    for(int k=0; k<4; k++)
                    {
                        if(Move(i, j, k))
                        {
                            if(cb[i+X[k]][j+Y[k]]=='#') moves++;
                        }
                    }
                    if(moves == 4) ans = {i+1, j+1};
                }
                if(ans.first>0) break;
            }
            if(ans.first>0) break;
        }
        cout << ans.first << " " << ans.second << endl;
    }

    return 0;
}