#include<bits/stdc++.h>
using namespace std;

vector<int> a, b, c;

void Merge(int m, int n)
{
    a[m+1] = INT_MIN;
    b[n+1] = INT_MIN;

    int p1=0, p2=0;
    for(int i=0; i<m+n; i++)
    {
        if(a[p1] >= b[p2])
        {
            c[i] = a[p1++];
        }
        else
        {
            c[i] = b[p2++];
        }
    }
}

int main()
{
    int m; cin >> m;
    for(int i=0; i<m; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }

    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        b.push_back(x);
    }

    Merge(m, n);

    for(auto e : c) cout << e << " ";

    return 0;
}