#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int> List;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            List.insert(x);
        }
        cout << n - List.size() << endl;
    }

    return 0;
}