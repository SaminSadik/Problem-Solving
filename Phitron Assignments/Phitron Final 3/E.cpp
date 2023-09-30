#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b) 
    {
        if(a.marks != b.marks) return (a.marks < b.marks);
        else return (a.roll > b.roll);
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> a;
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        string name; int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        a.push(obj);
    }

    int q; cin >> q;
    while(q--)
    {
        int cmd; cin >> cmd;
        if(cmd == 0)
        {
            string name; int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            a.push(obj);
        }
        else if(cmd == 2)
        {
            if(!a.empty()) a.pop();
        }

        if(a.empty()) cout << "Empty" << endl;
        else cout<<a.top().name<<" "<<a.top().roll<<" "<<a.top().marks<<endl;

    }

    return 0;
}