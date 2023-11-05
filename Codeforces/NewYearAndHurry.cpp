#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n, k;
    cin >> n >> k;
    int time = 240 - k, i = 0;

    while(((time - (5*i)) >= (5 * (i+1))) && i<n)
    {
        time -= (5*i);
        i++;
    }
    cout << i;

    return 0;
}