#include <bits/stdc++.h>
using namespace std;

int mini = INT_MAX, maxi = INT_MIN;

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
/* 
void print_LO(Node* root)
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
 */
/* 
int leaves(Node* root)
{
    if(!root) return 0;

    if(!root->left && !root->right)
    {
        return root->val;
    }
    else
    {
        int l = leaves(root->left);
        int r = leaves(root->right);
        return l+r;
    }
} // function to get the sum of all leaf nodes
 */
int minmax_leaves(Node* root)
{
    if(!root) return 0;

    if(!root->left && !root->right)
    {
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
    }
    else
    {
        minmax_leaves(root->left);
        minmax_leaves(root->right);
    }
    return 0;
}

int main()
{
    Node* root = input();
    //print_LO(root);
    //cout << leaves(root);
    minmax_leaves(root);
    cout << maxi << " " << mini << endl;
    return 0;
}