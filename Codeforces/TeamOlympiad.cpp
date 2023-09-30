#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n; cin>>n;
    vector<pair<int, int>> x, y, z;
    int a=0, b=0, c=0;
    for(int i=0; i<n; i++)
    {
        int temp; cin >> temp;
        if(temp==1)
        {
            a++;
            x.push_back(make_pair(temp, i+1));
        }
        if(temp==2)
        {
            b++;
            y.push_back(make_pair(temp, i+1));
        }
        if(temp==3)
        {
            c++;
            z.push_back(make_pair(temp, i+1));
        }
    }
    int total = min({a, b, c});
    cout << total << endl;

    for(int i=0; i<total; i++)
    {
        cout << x[i].second << " " << y[i].second << " " << z[i].second << endl;
    }


    return 0;
}