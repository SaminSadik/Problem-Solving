#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        queue<int> q;
        q.push(a); q.push(b); q.push(c);
        int l = min(a, min(b, c)), op = 3;
        while(!q.empty())
        {
            if (!op) break;
            int x = q.front();
            if(x == l)
            {
                q.pop();
                continue;
            }
            else
            {
                q.push(l); q.push(x-l);
                q.pop();
                op--;
            }
        }
        bool f = true;
        while(!q.empty())
        {
            if(q.front() != l) f = false;
            q.pop();
        }
        cout << (f ? "YES" : "NO")  << endl;
    }

    return 0;
}