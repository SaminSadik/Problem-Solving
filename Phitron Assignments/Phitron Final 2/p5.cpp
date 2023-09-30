#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    char s;
    int cls, id, math_marks, eng_marks, marks;
};

bool custom(Student x, Student y)
{
    if(x.marks > y.marks) return true;
    else if(x.marks == y.marks)
    {
        if(x.id < y.id) return true;
        else return false;
    }
    else return false;
}

int main()
{
    int n; cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
        cin>>a[i].math_marks>>a[i].eng_marks;
        a[i].marks = a[i].math_marks + a[i].eng_marks;
    }
    sort(a, a+n, custom);
    for(int i=0; i<n; i++)
    {
        //cout<<a[i].marks<<" ";
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id;
        cout<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }

    return 0;
}