#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int operation(int n, int fac2s)
{
    vector<int> in2s;
    for(int i=2; i<=n; i+=2)
    {
        int val = i, Count = 0;
        while(val % 2 == 0)
        {
            Count++;
            val /= 2;
        }
        in2s.push_back(Count);
    }
    sort(in2s.rbegin(), in2s.rend());
    int op = 0;
    for(int i=0; i<in2s.size(); i++)
    {
        fac2s += in2s[i];
        op++;
        if(fac2s >= n) return op;
    }
    return -1;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int fac2s = 0;
        for(int i=0; i<n; i++)
        {
            int a; cin >> a;
            while(a%2 == 0)
            {
                fac2s++;
                a /= 2;
            }
        }
        cout << ((fac2s<n) ? operation(n, fac2s) : 0) << endl;
    }

    return 0;
}