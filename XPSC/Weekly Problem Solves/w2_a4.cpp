//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        cout << longestSubstrDistinctChars (S) << endl;
    }
}
//} Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int ans = 0, f[26] = {0};
    for(int i=0, j=0; j<s.size(); j++)
    {
        f[s[j]-'a']++;
        if(f[s[j]-'a']>1)
        {
            ans = max(j-i, ans);
            while(s[i] != s[j])
            {
                f[s[i]-'a']--;
                i++;
            }
            f[s[i]-'a']--;
            i++;
        }
        ans = max((j-i+1), ans);
    }
    return ans;
}