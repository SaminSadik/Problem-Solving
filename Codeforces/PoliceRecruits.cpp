#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin>>n;
    int e[n];
    for(int i=0; i<n; i++) cin >> e[i];

    int free = 0, crime = 0;
    for(int i=0; i<n; i++)
    {
        if(e[i]<0 && free<1) crime++;
        else
        {
            free += e[i];
        }
    }
    cout << crime;

    return 0;
}