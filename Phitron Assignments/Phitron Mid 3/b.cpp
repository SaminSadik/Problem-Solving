#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 1005;
bool vis[N][N];
char mat[N][N];
int n, m, Si, Sj, Di, Dj;
vector<pii> path = {{-1,0},{1,0},{0,-1},{0,1}};
bool Sf = false, Df = false;

void dfs(int si, int sj)
{
    if(si==Si && sj==Sj) Sf = true;
    if(si==Di && sj==Dj) Df = true;

    vis[si][sj] = true;   
    for(int i=0; i<4; i++)
    {
        pii p = path[i];
        int Ci = si + p.first, Cj = sj + p.second;
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

    cin >> Si >> Sj >> Di >> Dj;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!vis[i][j] && mat[i][j]=='.') 
            {
                dfs(i, j);
                if(Sf && Df)
                {
                    cout << "YES";
                    return 0;
                }
                else Sf = Df = false;
            }
        }
    }
    cout << "NO";

    return 0;
}

// main concept copied from: algo-Module 15.3 & 15.4