#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    list<string>::iterator it;

    while(true)
    {
        string input; cin >> input;
        if(input == "end") break;
        myList.push_back(input);
    }
    int len = myList.size(), pos = 0;
    bool found, invalid;

    int q; cin >> q;
    while(q--)
    {
        string cmd; cin >> cmd;
        found = invalid = false;

        if(cmd == "visit")
        {
            string adrs; cin >> adrs;
            int p = 0;
            for(string s : myList)
            {
                if(s == adrs)
                {
                    found = true;
                    break;
                }   p++;
            }
            if(found)
            {
                pos = p;
                it = next(myList.begin(), pos);
            }
            else invalid = true;
        }
        else if(cmd == "next")
        {
            if((pos+1)<len)
            {
                it = next(it, 1);
                pos++;
            }
            else invalid = true;
        }
        else if(cmd == "prev")
        {
            if(pos>0)
            {
                it = next(it, len);
                pos--;
            }
            else invalid = true;
        }

        //cout << pos << " ";
        if(invalid) cout << "Not Available" << endl;
        else cout << *it << endl;
    }

    return 0;
}