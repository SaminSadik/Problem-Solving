#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long x;
        map<long long, int> cm; //counting map
        pair<long long, int> most = {0,0};
        for(int i=0; i<n; i++)
        {
            cin >> x;
            cm[x]++;
            if(cm[x] >= most.second)
            {
                most.first = (cm[x] == most.second) ? max(x, most.first) : x;
                most.second = cm[x]; 
            }
        }
        cout << most.first << " " << most.second << endl;
    }

    return 0;
}