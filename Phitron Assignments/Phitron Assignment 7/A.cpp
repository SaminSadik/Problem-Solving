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

int total(Node* root)
{
    if(!root) return 0;

    int l = total(root->left);
    int r = total(root->right);

    return root->val + l + r;
}

int main()
{
    Node* root = input();
    cout << total(root);
    return 0;
}