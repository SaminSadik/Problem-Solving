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

vector<int> Search(Node* root, int level)
{
    vector<int> v;

    if(!root) return v;

    queue<pair<Node*, int>> q;
    if(root) q.push({root, 0});
    while(!q.empty())
    {
        pair<Node*, int> pr = q.front();
        Node* nd = pr.first;
        int lvl = pr.second;
        q.pop();

        if(level == lvl) v.push_back(nd->val);
        if(level < lvl) break;

        if(nd->left) q.push({nd->left, lvl+1});
        if(nd->right) q.push({nd->right, lvl+1});
    }
    return v;
}

int main()
{
    Node* root = input();
    int level; cin >> level;

    vector<int> v = Search(root, level);
    if(v.empty()) cout << "Invalid";
    else for(int i: v) cout << i << " ";
    
    return 0;
}