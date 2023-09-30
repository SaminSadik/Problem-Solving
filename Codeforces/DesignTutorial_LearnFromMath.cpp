#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;

    vector<bool> is_prime(n+1,true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
            for (int j = i*i; j<=n; j+=i)
                is_prime[j] = false;
    }

    for(int i=4; i<n; i++)
    {
        if(!is_prime[n-i] && !is_prime[i])
        {
            cout << n-i << " " << i;
            break;
        }
    }

    return 0;
}