#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;

    int Count = 0, h[n], g[n];
    for(int i=0; i<n; i++) cin >> h[i] >> g[i];  
      
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(h[i]==g[j]) Count++;
        }
    }
    cout << Count;
    
    return 0;
}