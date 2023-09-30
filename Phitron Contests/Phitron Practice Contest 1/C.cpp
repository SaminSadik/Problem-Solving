#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}