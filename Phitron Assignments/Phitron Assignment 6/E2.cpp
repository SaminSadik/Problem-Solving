#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; 
        string s;
        cin >> n >> s;

        for(int i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1])
            {
                s.erase(i-1, 2); i--;
            } 
            else if(((s[i]=='R')&&(s[i-1]=='G'))||((s[i]=='G')&&(s[i-1]=='R')))
            {
                s.replace(i-1,2,"Y");
            }
            else if(((s[i]=='R')&&(s[i-1]=='B'))||((s[i]=='B')&&(s[i-1]=='R')))
            {
                s.replace(i-1,2,"P");
            }
            else if(((s[i]=='B')&&(s[i-1]=='G'))||((s[i]=='G')&&(s[i-1]=='B')))
            {
                s.replace(i-1,2,"C");
            }
        }
        for(int i = 1; i < s.size();)
        {
            if(s[i]==s[i-1])
            {
                s.erase(i-1, 2); i--;
            }
            else i++;
        }

        cout << s << endl;
    }

    return 0;
}

// checking corner case: 1 18 RBGRGBBRGBGRGRBGBR