#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int, greater<int>> a;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            a.insert(x);
        }

        for(auto it = a.begin(); it != a.end(); it++) cout << *it << " ";
        cout << endl;
    }

    return 0;
}
/* 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        set<int> a;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x;
            a.insert(x);
        }

        auto it = --a.end();
        while(it != a.begin())
        {
            cout << *it << " ";
            it--;
        }
        cout << *it << endl;
    }

    return 0;
}
 */