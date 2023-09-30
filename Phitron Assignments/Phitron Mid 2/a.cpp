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

void print(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sort_ascending(Node * head)
{
    for(Node * i = head; (i->next != NULL); i = i->next)
    {
        for(Node * j = i->next; (j != NULL); j = j->next)
        {
            if(i->val > j->val) swap(i->val , j->val);
        }
    }
}

void remove_duplicate(Node *&head)
{
    Node * temp = head;
    while(temp->next != NULL)
    {
        if(temp->val == temp->next->val)
        {
            Node * deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }

        if(temp->next == NULL) break;
        else if(temp->val != temp->next->val) temp = temp->next;  
    }
}

int main()
{
    Node* head = NULL;

    while(true)
    {
        int val; cin >> val;
        if(val == -1) break;
        input(head, val);
    }

    sort_ascending(head);
    remove_duplicate(head);
    print(head);

    return 0;
}