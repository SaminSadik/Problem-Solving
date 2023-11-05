#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int passcore = a[k-1], passed = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>0 && a[i]>=passcore) passed++;
    }

    cout << passed << endl;

    cout << flush;
    return 0;
}
