#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int N = 101;
int dis[N][N];
bool vis[N][N];
vector<pii> moves = {{2,-1},{2,1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,2},{-1,-2}};
//vector<int> qFound;
bool qFound;
int n, m, Ki, Kj, Qi, Qj, steps, moved;

bool isValid(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m);
}

void bfs()
{
    queue<pii> q;
    q.push({Ki, Kj});
    vis[Ki][Kj] = true;
    //dis[Ki][Kj] = 0;

    while(!q.empty())
    {
        pii p = q.front();
        int Pi = p.first, Pj = p.second;
        q.pop();
        //if(Pi==Qi && Pj==Qj) qFound.push_back(dis[Pi][Pj]);
        if(Pi==Qi && Pj==Qj) qFound = true;
        for(int i=0; i<8; i++)
        {
            int x = (Pi + moves[i].first), y = (Pj + moves[i].second);
            if(isValid(x, y)) // && !vis[x][y])
            {
                moved++;
                cout<<"@ {"<<x<<", "<<y<<"}\n";
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

/* void dfs(int ki, int kj) // not working
{
    cout << "\nOutside loop --->\t Steps = " << steps << endl;
    vis[ki][kj] = true;
	if(ki==Qi && kj==Qj)
	{
		qFound.push_back(steps);
        if(steps == 0) return;
	}
	for(int i=0; i<8; i++)
	{
        int x = (ki + moves[i].first), y = (kj + moves[i].second);
		if(isValid(x, y) && !vis[x][y])
		{
            cout << "Inside con before rec --->\t Steps = " << steps << endl;
            steps++;
			dfs(x, y);
            steps = 0;
		}
        cout << "Inside loop after con --->\t Steps = " << steps << "\n\n";
	}
} */

int main()
{
    int t; cin >> t;
    //while(t--)
    for(int i=1; i<=t; i++)
    {
        cout << "\niteration " << i << ":\n";
        steps = 0;
        cin >> n >> m >> Ki >> Kj >> Qi >> Qj;

        for(int i=0; i<n; i++) 
        { for(int j=0; j<m; j++) { dis[i][j] = vis[i][j] = 0; } }

        moved = 0;
        qFound = false; bfs();
        cout << "Moved : " << moved << endl;
        if(qFound) cout << dis[Qi][Qj] << endl;
        else cout << "-1\n";
        
        /* //dfs(Ki, Kj);

        if(qFound.empty()) cout << "-1\n";
        else
        {
            sort(qFound.begin(), qFound.end());
            cout << qFound[0] << endl;
            qFound.clear();
        } */
    }

    return 0;
}
