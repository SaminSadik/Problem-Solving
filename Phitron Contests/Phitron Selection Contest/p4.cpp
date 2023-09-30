#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            for(int j=i; j<=n; j++) cout << j;
            cout << endl;
        }
        else if(i==n)
        {
            for(int j=1; j<=n; j++) cout << n;
            cout << endl;
        }
        else
        {
            cout << i;
            for(int i=0; i<(n-2); i++) cout << " ";
            cout << n << endl;
        }
    }

    return 0;
}