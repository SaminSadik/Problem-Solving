//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

//User function template for C++
class Solution{
public:
	int search(string pat, string txt)
    {
        int Fp[26] = {0}, Ft[26] = {0};
        for(char c : pat) Fp[c - 'a']++;
        
        int ans = 0;
        for(int i=0, j=0; j<txt.size(); j++)
        {
            Ft[txt[j] - 'a']++;
            if(j >= (pat.size()-1))
            {
                bool flag = true;
                for(int c = 0; c < 26; c++)
                {
                    if (Ft[c] != Fp[c])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag) ans++;
                Ft[txt[i] - 'a']--;
                i++;
            }
        }
        return ans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends

/*
2
forxxorfxdofr
for
aabaabaa
aaba
*/