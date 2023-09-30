#include <bits/stdc++.h>
using namespace std;

int Size = 0;

class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

/* void print(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
} */

void input(Node *&head, int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void sort_descending(Node * head)
{
    for(Node * i = head; (i->next != NULL); i = i->next)
    {
        for(Node * j = i->next; (j != NULL); j = j->next)
        {
            if(i->val < j->val) swap(i->val , j->val);
        }
    }
}

void find_mid(Node * head)
{
    Node * temp = head;
    for(int i=0; i<(Size/2)-1; i++) temp = temp->next;

    if(Size%2) cout << temp->next->val;
    else cout << temp->val << " " << temp->next->val;
}

int main()
{
    Node* head = NULL;

    while(true)
    {
        int val; cin >> val;
        if(val == -1) break;
        input(head, val);
        Size++;
    }
    sort_descending(head);
    //print(head);
    if(Size == 1) cout << head->val;
    else find_mid(head);

    return 0;
}