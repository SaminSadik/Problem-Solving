#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 101;
int dis[N][N];
bool vis[N][N];
vector<pii> moves = {{2,-1},{2,1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,2},{-1,-2}};
bool qFound;
int n, m, Ki, Kj, Qi, Qj;

void bfs()
{
    queue<pii> q;
    q.push({Ki, Kj});
    vis[Ki][Kj] = true;

    while(!q.empty())
    {
        pii p = q.front();
        int Pi = p.first, Pj = p.second;
        q.pop();
        if(Pi==Qi && Pj==Qj) qFound = true;
        for(int i=0; i<8; i++)
        {
            int x = (Pi + moves[i].first), y = (Pj + moves[i].second);
            if(x>=0 && x<n && y>=0 && y<m)
            {
                if(vis[x][y])
                {
                    dis[x][y] = min(dis[x][y], (dis[Pi][Pj]+1));
                    continue;
                }
                q.push({x,y});
                dis[x][y] = dis[Pi][Pj] + 1;
                vis[x][y] = true;
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m >> Ki >> Kj >> Qi >> Qj;

        for(int i=0; i<n; i++) 
        { for(int j=0; j<m; j++) { dis[i][j] = vis[i][j] = 0; } }

        qFound = false;
        bfs();

        if(qFound) cout << dis[Qi][Qj] << endl;
        else cout << "-1\n";
    }

    return 0;
}
