#include <bits/stdc++.h>
using namespace std;

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

void input(Node *&head, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void find_minmax(Node * head)
{
    int mini=1001, maxi=0;

    for(Node * i = head; (i != NULL); i = i->next)
    {
        if(maxi <= i->val) maxi = i->val;
        if(mini >= i->val) mini = i->val;
    }

    cout << maxi << " " << mini << endl;
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

    find_minmax(head);


    return 0;
}