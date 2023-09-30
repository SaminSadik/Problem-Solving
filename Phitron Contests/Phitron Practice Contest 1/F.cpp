#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

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
Node *inputree()
{
    int val; cin >> val;

    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r; cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void queueing(Node *root)
{
    if (root == NULL) return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        pq.push(f->val);

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
}
int main()
{
    Node *root = inputree();
    queueing(root);

    int q; cin >> q;
    while(q--)
    {
        int op; cin >> op;
        if(op == 1)
        {
            int val; cin >> val;
            pq.push(val);
        }
        else 
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }

    return 0;
}