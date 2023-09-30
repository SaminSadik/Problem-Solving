#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node * left;
        Node * right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input()
{
    int val; cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *Left, *Right;
        Left = (l!=-1) ? new Node(l) : NULL;
        Right = (r!=-1) ? new Node(r) : NULL;
        parent->left = Left;
        parent->right = Right;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }

    return root;
}

void output(Node* root)
{
    if(!root) return;

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    cout << endl;
}

void PrintReverse(Node* root)
{
    if(!root) return;

    vector<int> v;

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->right) q.push(f->right);
        if(f->left) q.push(f->left);
    }
    reverse(v.begin(), v.end());
    for(int e : v) cout << e << " ";
    cout << endl;
}


int main()
{
    Node* root = input();
    PrintReverse(root);
    return 0;
}