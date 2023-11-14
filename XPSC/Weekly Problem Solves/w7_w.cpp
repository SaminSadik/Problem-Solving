#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    string s; cin >> s;
    int n=s.size(), freq[26] = {0};
    for(int i=0; i<n; i++)
    {
        freq[s[i]-'A']++;
    }
    int cur = 0;
    char ans[n];
    bool extra = false, possible = true;
    for(int i=0; i<26; i++)
    {
        if(!freq[i]) continue;
        if(freq[i]%2)
        {
            if(extra)
            {
                possible = false;
                break;
            }
            extra = true;
            ans[(n-1)/2] = (char)i+'A';
            freq[i]--;
        }
        while(freq[i])
        {
            ans[n-1-cur] = (char)i+'A';
            ans[cur++] = (char)i+'A';
            freq[i]-=2;
        }
        
    }
    if(possible) for(char c: ans) cout << c;
    else cout << "NO SOLUTION";

    return 0;
}