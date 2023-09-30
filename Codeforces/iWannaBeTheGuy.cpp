#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n, p, q;

    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    set<int> z;

    cin >> p;
    for(int i=0; i<p; i++) {
        cin >> x[i];
        z.insert(x[i]);
    }

    cin >> q;
    for(int i=0; i<q; i++) {
        cin >> y[i];
        z.insert(y[i]);
    }

    if(z.size()==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}
