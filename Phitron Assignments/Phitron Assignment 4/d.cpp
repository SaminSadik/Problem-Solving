#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int A; cin >> A;
        a.push_back(A);
    }

    int m; cin >> m;
    vector<int> b;
    for(int i=0; i<m; i++)
    {
        int B; cin >> B;
        b.push_back(B);
    }

    int x; cin >> x;

    a.insert(a.begin()+x, b.begin(), b.end());
    for(auto e : a) cout << e << " ";

    return 0;
}