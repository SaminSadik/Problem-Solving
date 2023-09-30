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

int Nodes(Node* root)
{
    if(!root) return 0;
    int l = Nodes(root->left);
    int r = Nodes(root->right);
    return l+r+1;
}

int Height(Node* root)
{
    if(!root) return 0;
    int l = Height(root->left);
    int r = Height(root->right);
    return max(l, r)+1;
}

int main()
{
    Node* root = input();
    int total_nodes = Nodes(root),
        max_height = Height(root);
    
    if(total_nodes == pow(2, max_height) - 1) cout << "YES";
    else cout << "NO";

    return 0;
}