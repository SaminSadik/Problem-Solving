#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    vector<long long> b;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i) b.push_back(a[i] + b[i-1]);
        else b.push_back(a[i]);
    }

    for(int i=b.size()-1; i>=0; i--) cout << b[i] << " ";

    return 0;
}