#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = false;

    string s, name;
    getline(cin, s);
    stringstream S(s);

    while(S >> name)
    {
        if(name == "Ratul")
        {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";

    return 0;
}