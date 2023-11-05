#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int frnd, bottle, ml, lime, slice, salt, needed_ml, needed_salt;
    cin>>frnd>>bottle>>ml>>lime>>slice>>salt>>needed_ml>>needed_salt;

    int total_ml = bottle * ml, total_lime = lime * slice;
    cout << min({(total_ml / needed_ml), (salt / needed_salt), total_lime})/frnd;

    return 0;
}