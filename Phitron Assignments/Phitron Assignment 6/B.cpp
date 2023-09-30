#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    stack<int> st;
    queue<int> qu;
    list<int> l1, l2;

    cin >> n >> m;

    while(n--)
    {
        cin >> x;
        st.push(x);
    }
    while(m--)
    {
        cin >> x;
        qu.push(x);
    }

    while(!st.empty())
    {
        l1.push_back(st.top());
        st.pop();
    }

    while(!qu.empty())
    {
        l2.push_back(qu.front());
        qu.pop();
    }


    if(l1 == l2) cout << "YES";
    else cout << "NO";
    
}