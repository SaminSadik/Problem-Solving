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

void input(Node *&head, Node *&tail, int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void Reverse(Node *&head, Node *cur)
{
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }
    Reverse(head, cur->next);

    cur->next->next = cur;
    cur->next = NULL;
}

bool is_palindrome(Node * head1)
{
    Node * temp1 = head1;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    while(temp1 != NULL)
    {
        input(head2, tail2, temp1->val);
        temp1 = temp1->next;
    }
    Reverse(head2, head2);
    temp1 = head1;

    Node * temp2 = head2;
    while(temp1 != NULL)
    {
        if(temp1->val != temp2->val) return false;

        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

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

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while(true)
    {
        int val; cin >> val;
        if(val == -1) break;
        input(head, tail, val);
    }

    if(is_palindrome(head)) cout << "YES" << endl;
    else cout << "NO" << endl;

    /* print(head);
    Reverse(head, head); print(head); */

    return 0;
}