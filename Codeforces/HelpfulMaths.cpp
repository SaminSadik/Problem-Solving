#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> v;
    for(int i=0; i<s.length(); i+=2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());

    for(int i=0, j=0; i<s.length(); i+=2, j++)
    {
        s[i] = v[j];
    }

    cout << s << endl;

    return 0;
}

