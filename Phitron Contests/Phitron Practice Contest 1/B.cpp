#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for(auto it = m.begin(); it != m.end(); it++)
        {
            if(it->second % 2)
            {
                cout << it->first << endl;
                break;
            }
        }
    }

    return 0;
}