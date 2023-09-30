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

void printReverse(Node * sll)
{
    if(sll == NULL) return;

    printReverse(sll->next);
    cout << sll->val << " ";
}

void printNormal(Node * sll)
{
    if(sll == NULL) return;

    cout << sll->val << " ";
    printNormal(sll->next);
}

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

int main()
{
    Node *head = NULL, *tail = NULL;

    while(true)
    {
        int val; cin >> val;
        if(val == -1) break;
        input(head, tail, val);
    }

    printReverse(head); cout << endl;
    printNormal(head); cout << endl;

    return 0;
}