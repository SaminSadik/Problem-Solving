#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    vector<int> is_prime(100,1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i < 100; i++)
    {
        if (is_prime[i])
            for (int j = i*i; j<100; j+=i)
                is_prime[j] = 0;
    }

    int t; cin >> t;
    while(t--)
    {
        string n; cin >> n;
        bool flag = false;
        for(int i=0; i<9; i++)
        {
            for(int j=i+1; j<9; j++)
            {
                int x = ((int)n[i]-'0')*10 + ((int)n[j]-'0');
                if(is_prime[x])
                {
                    cout << x << endl;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) cout << "-1\n";
    }

    return 0;
}