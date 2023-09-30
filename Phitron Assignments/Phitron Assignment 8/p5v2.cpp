#include<bits/stdc++.h>
using namespace std;

vector<int> a1, a2, merged;

void Merge(int m, int n)
{
    a1.push_back(INT_MIN);
    a2.push_back(INT_MIN);

    int p1=0, p2=0;
    for(int i=0; i<m+n; i++)
    {
        if(a1[p1] >= a2[p2]) merged.push_back(a1[p1++]);
        else merged.push_back(a2[p2++]);
    }
}

int main()
{
    int m; cin >> m;
    for(int i=0; i<m; i++)
    {
        int x; cin >> x;
        a1.push_back(x);
    }

    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a2.push_back(x);
    }

    Merge(m, n);

    for(auto e : merged) cout << e << " ";

    return 0;
}