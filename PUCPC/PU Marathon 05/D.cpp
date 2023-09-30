#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    string n; cin >> n;
    if((n[0]==n[1] && n[1]==n[2]) || (n[1]==n[2] && n[2]==n[3])) cout << "Yes";
    else cout << "No";

    return 0;
}