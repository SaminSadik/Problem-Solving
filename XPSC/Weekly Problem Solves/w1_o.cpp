#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    string s; cin >> s;
    vector<bool> occured(26, false);
    for(int i=0; i<s.size(); i++)
    {
        int letter = s[i] - 'a';
        occured[letter] = true;
    }
    for(int i=0; i<26; i++)
    {
        if(!occured[i])
        {
            char ans = 'a' + i;
            cout << ans;
            return 0;
        }
    }
    cout << "None";

    return 0;
}