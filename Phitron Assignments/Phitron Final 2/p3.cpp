#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    char s;
    int cls, math_marks, eng_marks;
};

int main()
{
    int n; cin >> n;
    Student a[n];
    for(int i=(n-1); i>=0; i--)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" ";
        cout<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }

    return 0;
}