#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void solve()
{
    int y; cin >> y;

    int val = 1;
    Node *root = new Node(val);
    queue<pair<Node*, int>> q;
    q.push({root, 1});

    int ans = 0;
    while(y--)
    {
        val *= 2;

        pair<Node*, int> pr = q.front();
        Node *p = pr.first;
        int lvl = pr.second;
        q.pop();

        p->left = new Node(val);
        p->right = new Node(val);

        q.push({p->left, lvl+1});
        q.push({p->right, lvl+1});
    }
}
void shortcut();

int main()
{
    //solve(); //incomplete
    shortcut();
    return 0;
}

void shortcut()
{
    int y; cin >> y;
    int power[21]; power[1] = 1;
    for(int i=2, j=1; i<21; i++, j+=2) power[i] = pow(2, j);
    cout << power[y];
}
/* 
2^0 = 1
2^1 = 2
2^3 = 8
2^5 = 32
2^7 = 128
 */