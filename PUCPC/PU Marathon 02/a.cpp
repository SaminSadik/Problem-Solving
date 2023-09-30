#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int w, h, n;
    cin >> w >> h >> n;

    vector<int> x, y;
    x.emplace_back(0); y.emplace_back(0);
    for(int i=0; i<n; i++)
    {
        int X, Y;
        cin >> X >> Y;
        x.emplace_back(X); y.emplace_back(Y);
    }
    x.emplace_back(w+1); y.emplace_back(h+1);
    sort(x.begin(), x.end()); sort(y.begin(), y.end());

    int maxW = 0, maxH = 0;
    for(int i=1; i<(n+2); i++)
    {
        //cout << "Before: " << maxW << " " << maxH << endl;
        maxW = max(maxW, (x[i] - x[i-1] - 1));
        maxH = max(maxH, (y[i] - y[i-1] - 1));
        //cout << "After: " << maxW << " " << maxH << endl;
    }
    cout << maxW * maxH;

    return 0;
}