#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

bool cmp(pii a, pii b)
{
    if(a.first!=b.first) return (a.first<b.first);
    else return (a.second<b.second);
}

int main()
{
    int e; cin >> e;
    vector<pii> con;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        con.push_back({a, b});
    }
    sort(con.begin(), con.end(), cmp);

    for(auto x : con)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}