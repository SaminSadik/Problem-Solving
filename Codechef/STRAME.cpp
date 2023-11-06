#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int p = 1;
        stack<char> st;
        for(auto i : s)
        {
            if (!st.empty() && st.top() != i)
            {
                st.pop();
                p++;
            }
            else st.push(i);
        }
        cout << ((p%2) ? "Ramos" : "Zlatan") << endl;
    }

    return 0;
}