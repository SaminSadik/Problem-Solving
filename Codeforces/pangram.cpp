#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin >> n;
    string s; cin >> s;

    if(n<26) cout << "NO";
    else
    {
        for(int i=0; i<n; i++) s[i] = toupper(s[i]);
        sort(s.begin(), s.end());
        
        int Count = 1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]!=s[i+1]) Count++;
        }
        if(Count>25) cout << "YES";
        else cout << "NO";
    }

    return 0;
}