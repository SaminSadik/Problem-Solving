#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int comp(int A, int B)
{
    int Count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((A >> i) & 1) != ((B >> i) & 1))
        {
            Count++;
        }
    }
    return Count;
}

signed main()
{
    IOS

    int n, m, k, ans=0;
    cin >> n >> m >> k;
    vector<int> x;

    for(int i=0; i<m+1; i++)
    {
        int v; cin >> v;
        x.emplace_back(v);
    }

    for(int i=0; i<m; i++)
    {
        if(comp(x[i], x[m])<=k) ans++;
    }

    cout << ans << endl;

    return 0;
}

/* //Another Approach:
#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
int n, m, k;
string Fedor;

string toBinary(int x)
{
    char s[n];
    int pos = 0;
    for(int i=n-1; i>=0; i--)
    {
        s[pos++] = (((x >> i) & 1) ? '1' : '0');
        //if(pos == n) break;
    }
    return s;
}

bool isFriend(int x)
{
    string Player = toBinary(x);
    int Count = 0;
    for(int i=0; i<n; i++)
    {
        if(Fedor[i] != Player[i]) Count++;
    }
    return (Count<=k);
}

signed main()
{
    SSK

    cin >> n >> m >> k;
    int p[m+1];
    for(int i=0; i<=m; i++) cin >> p[i];

    Fedor = toBinary(p[m]);
    int ans = 0;
    for(int i=0; i<m; i++)
    {
        if(isFriend(p[i])) ans++;
    }
    cout << ans;

    return 0;
}
*/