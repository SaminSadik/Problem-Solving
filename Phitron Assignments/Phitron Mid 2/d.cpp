#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node * next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

int size(Node * head)
{
    Node * temp = head;
    int Count = 0;
    while(temp != NULL)
    {
        Count++;
        temp = temp->next;
    }
    return Count;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    for(int i=1; i<pos; i++) temp = temp->next;
    
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node * newNode = new Node(val);

    if(tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node * newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode; 
    head = newNode;
}

void printNormal(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void printReverse(Node * tail)
{
    Node * temp = tail;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q; cin >> q;
    while(q--)
    {
        int x, v; cin >> x >> v;

        if(x > size(head)) cout << "Invalid" << endl;
        else
        {
            if(x == size(head)) insert_tail(head, tail, v);
            else if(x == 0) insert_head(head, tail, v);
            else insert_at_position(head, x, v);

            cout << "L -> "; printNormal(head);
            cout << "R -> "; printReverse(tail);
        }    
    }

    return 0;
}