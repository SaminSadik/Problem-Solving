#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if(tail == NULL) tail = head;
}


int main()
{
    int q; cin >> q;
    Node *head = NULL, *tail = NULL;

    while(q--)
    {
        int x, v;
        cin >> x >> v;

        if(x == 0) insert_at_head(head, tail, v);
        else insert_at_tail(head, tail, v);

        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}