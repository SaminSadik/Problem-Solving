#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s); 
        vector<string> known;
        
        string goes = "";
        getline(cin, goes);
        while(goes != "what does the fox say?")
        {
            stringstream ss(goes);
            string w; while(ss >> w);
            known.push_back(w);
            getline(cin, goes);
        }

        //for(auto e: known) cout << e << endl;
        for(int i=0; i<known.size(); i++)
        {
            stringstream str(s);
            string word, temp = "";
            while(str >> word)
            {
                if(known[i] != word)  temp += (word + " ");
            }
            s = temp;
        }
        cout << s << endl;
    }

    return 0;
}