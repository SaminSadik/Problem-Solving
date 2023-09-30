#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n, m;
        cin >> n >> m;

        char mat[n][m];
        for(int i=0; i<n; i++)
        {
            string carpet;
            cin >> carpet;
            for(int j=0; j<m; j++)
            {
                mat[i][j] = carpet[j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        string name = "vika";
        int ind = 0;
        for(int j=0; j<m; j++)
        {
            for(int i=0; i<n; i++)
            {
                if(mat[i][j]==name[ind])
                {
                    ind++;
                    if(ind == 4)
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    else break;
                }
            }
        }
        cout << "NO" << endl;
        
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}