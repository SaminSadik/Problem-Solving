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

void input(Node *&head, Node *&tail, int val)
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

void is_equal(Node *head1, Node *head2)
{
    bool flag = true;
    for(Node *i = head1, *j = head2; (i != NULL) && (j != NULL); i = i->next, j = j->next)
    {
        if((i->val != j->val) || ((i->next == NULL) && (j->next != NULL)) || ((i->next != NULL) && (j->next == NULL)))
        {
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
}

int main()
{
    Node *head1, *tail1, *head2, *tail2;
    head1 = tail1 = head2 = tail2 = NULL;

    while(true)
    {
        int val; cin >> val;
        if(val == -1) break;
        input(head1, tail1, val);
    }
    while(true)
    {
        int val; cin >> val;
        if(val == -1) break;
        input(head2, tail2, val);
    }
    //print(head1); print(head2);

    is_equal(head1, head2);

    return 0;
}