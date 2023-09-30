#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> a;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a.push(x);
    }

    int q; cin >> q;
    while(q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 0)
        {
            int x; cin >> x;
            a.push(x);
        }
        else if(cmd == 2)
        {
            if(!a.empty()) a.pop();
        }

        if(a.empty()) cout << "Empty" << endl;
        else cout << a.top() << endl;
    }

    return 0;
}