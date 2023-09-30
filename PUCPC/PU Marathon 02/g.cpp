#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main()
{
    IOS

    int n; cin >> n;
    int sum=0, mini=INT_MAX;
    bool flag = false;

    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        sum += x;
        if(x%10)
        {
            flag = true;
            mini = min(mini, x);
        }
    }

    if(!flag) cout << "0\n";
    else if(sum%10) cout << sum << endl;
    else cout << sum-mini << endl;

    return 0;
}

/*
int main()
{
    IOS

    int n, sum=0; cin >> n;
    vector<int> s;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        s.emplace_back(x);
        sum += x;
    }
    sort(s.begin(), s.end());

    for(int i=0; i<n && (sum%10 == 0); i++)
    {
        sum -= s[i];
    }
    cout << sum;

    return 0;
}
*/