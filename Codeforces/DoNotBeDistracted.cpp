#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        set<char> task; task.insert(s[0]);
        int len = 1; bool flag = true;
        for(int i=1; i<s.size(); i++)
        {
            task.insert(s[i]);
            if(s[i] != s[i-1])
            {
                len++;
                if(len > task.size())
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}