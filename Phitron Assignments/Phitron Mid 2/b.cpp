#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    int val; cin >> val;
    while(val != -1)
    {
        myList.push_back(val);
        cin >> val;
    }

    myList.sort();
    myList.unique();
    for(int e : myList) cout << e << " ";
}