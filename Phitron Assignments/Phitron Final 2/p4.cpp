#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    char s;
    int cls, id;
};

int main()
{
    int n; cin >> n;
    Student a[n];
    for(int i=0 ,j=(n-1); i<n; i++, j--)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s;
        cin>>a[j].id;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }

    return 0;
}