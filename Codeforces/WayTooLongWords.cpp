#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int i, n, x;
    scanf("%d", &n);
    char s[100];
    for(i=1; i<=n; i++)
    {
        scanf("%s", &s);
        x = strlen(s);
        if(x<11) printf("%s\n", s);
        else printf("%c%d%c\n",s[0],x-2,s[x-1]);
    }

    return 0;
}
