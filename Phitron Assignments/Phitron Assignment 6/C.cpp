#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> line;

    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        string nam;
        
        if(x == 0)
        {
            cin >> nam;
            line.push(nam);
        }
        else
        {
            if(line.empty()) cout << "Invalid" << endl;
            else
            {
                cout << line.front() << endl;
                line.pop();
            }
        }
    }

    return 0;
}