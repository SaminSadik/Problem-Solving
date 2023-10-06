#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

vector<bool> prime(3001, true);
void setPrimes()
{
    for(int i=2; i*i<3001; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<3001; j += i) prime[j] = false;
        }
    }
}
bool isAlmostPrime(int n)
{
    int c = 0;
    for(int i=2; i<=n/2; i++)
    {
        if((n%i==0) && prime[i]) c++;
        if(c == 3) break;
    }
    if(c==2) return true;
    else return false;
}

signed main()
{
    SSK

    int n; cin >> n;
    setPrimes();
    int ans = 0;
    for(int i=6; i<=n; i++)
    {
        if(isAlmostPrime(i)) ans++;
    }
    cout << ans;

    return 0;
}