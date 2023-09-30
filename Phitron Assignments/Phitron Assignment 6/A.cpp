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

class myList
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int Size = 0;

    void push(int val)
    {
        Size++;
        Node * newNode = new Node(val);

        if(head == NULL)
        {
            tail = newNode;
            head = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    int Front()
    {
        return head->val;
    }

    int Back()
    {
        return tail->val;
    }

    void back_pop()
    {
        Size--;
        Node * deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL) head = NULL;
        else tail->next = NULL;
    }

    void front_pop()
    {
        Size--;
        Node * deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL) tail = NULL;
        else head->prev = NULL;
    }

    void print()
    {
        Node * temp = head;
        while(temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

class myStack
{
    public:
    myList l;

    void push(int val)
    {
        l.push(val);
    }

    void copy(myList &l1)
    {
        while(l.Size>0)
        {
            l1.push(l.Back());
            l.back_pop();
        }
    }
    
};

class myQueue
{
    public:
    myList l;

    void push(int val)
    {
        l.push(val);
    }

    void copy(myList &l2)
    {
        while(l.Size>0)
        {
            l2.push(l.Front());
            l.front_pop();
        }
    }

};

bool is_equal(myList l1, myList l2)
{
    if(l1.Size == l2.Size)
    {
        Node * t1 = l1.head;
        Node * t2 = l2.head;
        while((t1 != NULL) && (t2 != NULL))
        {
            if(t1->val != t2->val) return false;
            t1 = t1->next;
            t2 = t2->next;
        }
        return true;
    }
    else return false;
}

int main()
{
    int n, m, x;
    cin >> n >> m;

    myStack st;
    while(n--)
    {
        cin >> x;
        st.push(x);
    }

    myQueue qu;
    while(m--)
    {
        cin >> x;
        qu.push(x);
    }

    myList l1, l2;
    st.copy(l1); qu.copy(l2);

    if(is_equal(l1, l2)) cout << "YES";
    else cout << "NO";
    
}