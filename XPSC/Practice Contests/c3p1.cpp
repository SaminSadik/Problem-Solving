#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int n; cin >> n;
    string s; cin >> s;

    vector<int> a(n/2, 0), b(n/2, 0);
    for(int i=1, j=0; i<n; i+=2, j++)
    {
        if(s[i-1]=='a') a[j]++;
        else b[j]++;
        if(s[i]=='a') a[j]++;
        else b[j]++;
    }

    int op = 0;
    for(int i=0, k=1; i<a.size(); i++, k+=2)
    {
        for(int j=k; j>=0 && a[i]>b[i]; j--)
        {
            if(s[j]=='a') s[j] = 'b';
            a[i]--; b[i]++;
            op++;
        }
        for(int j=k; j>=0 && a[i]<b[i]; j--)
        {
            if(s[j]=='b') s[j] = 'a';
            b[i]--; a[i]++;
            op++;
        }
    }

    cout << op << endl << s << endl;

    return 0;
}