#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int n, k;
    cin >> n >> k;

    vector<int> a;
    for(int i=0; i<n; i++) 
    {
        int A; cin >> A;
        if((A+k <= 5) && (A<5)) a.push_back(A);
    }
    sort(a.begin(), a.end());

    int team = 0;
    for(int i=0; (i+2)<a.size(); i++)
    {
        if((a[i]+k <= 5) && (a[i+1]+k <= 5) && (a[i+2]+k <= 5))
        {
            team++;
            i += 2;
        }
    }
    cout << team;
    return 0;
}