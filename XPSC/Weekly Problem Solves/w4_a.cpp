#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);
vector<int> a;

bool rotate(int p, int i)
{
    if(i == a.size()) return (p==0);

    if(rotate((p+a[i])%360, i+1)) return true;
    return rotate((p-a[i]+360)%360, i+1);
}

signed main()
{
    SSK

    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cout << (rotate(0, 0) ? "YES" : "NO");

    return 0;
}

/* // Using Bitmasking:
#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    bool flag = false;
    int N = 1 << n;
    for(int i=0; i<N; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j)) sum += a[j];
            else sum -= a[j];
        }
        if(sum%360 == 0)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");

    return 0;
} */