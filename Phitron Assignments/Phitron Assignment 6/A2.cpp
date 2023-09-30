#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    list<int> copy()
    {
        list<int> l1;
        while(l.size())
        {
            l1.push_back(l.back());
            l.pop_back();
        }
        return l1;
    }
    
};

class myQueue
{
    public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    list<int> copy()
    {
        list<int> l2;
        while(l.size())
        {
            l2.push_back(l.front());
            l.pop_front();
        }
        return l2;
    }

};

int main()
{
    int n, m, x;
    cin >> n >> m;

    myStack st;
    while(n--)
    {
        cin >> x;
        st.push(x);
    }

    myQueue qu;
    while(m--)
    {
        cin >> x;
        qu.push(x);
    }

    if(st.copy() == qu.copy()) cout << "YES";
    else cout << "NO";
    
}