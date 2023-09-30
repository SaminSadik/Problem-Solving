#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 1005;
bool vis[N][N];
char mat[N][N];
int n, m, Count;
vector<pii> path = {{-1,0},{1,0},{0,-1},{0,1}};

void dfs(int Si, int Sj)
{
    Count++;
    vis[Si][Sj] = true;   
    for(int i=0; i<4; i++)
    {
        pii p = path[i];
        int Ci = Si + p.first, Cj = Sj + p.second;
        if(Ci>=0 && Ci<n && Cj>=0 && Cj<m && mat[Ci][Cj]=='.' && !vis[Ci][Cj])
            dfs(Ci, Cj);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> mat[i][j];

    int ans = INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!vis[i][j] && mat[i][j]=='.') 
            {
                Count = 0;
                dfs(i, j);
                ans = min(Count, ans);
            }
        }
    }
    if(ans == INT_MAX) cout << "-1";
    else cout << ans;

    return 0;
}

// main concept copied from: algo-Module 15.3 & 15.4 & 15.7 