#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for(int i=0; i<s1.length(); i++)
    {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
    /* same thing can be done in short by using STL*/
    //transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    //transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    int ans = 0;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]<s2[i])
            {
                ans = -1;
                break;
            }
            else if(s1[i]>s2[i])
            {
                ans = 1;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}

