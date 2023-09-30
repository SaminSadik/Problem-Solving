#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s, x;
        cin >> s >> x;
        int m=s.size(), n=x.size();
        string r = "$";

        for(int i=0; i<m; i++)
        {
            if(s[i] == x[0])
            {
                int Count = 1, I=i+1;
                for(int j=1; j<n; j++)
                {
                    if(s[I] == x[j]) { Count++; I++; }
                    else break;
                }
                if(Count == n)
                {
                    s.replace(i, n, r);
                    m-=(n-1);
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}