#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

bool check(vector<string> g, string w)
{
    for(int i=0; i<g.size(); i++)
    {
        if(w == g[i]) return true;
    }
    return false;
}

void solve()
{
    int n; cin >> n;
    cin.ignore(); 

    string word, words;
    vector<string> g1;
    int p1=0, p2=0, p3=0;
    set<string> s1, s2;

    getline(cin, words);
    stringstream w1(words);
    while(w1 >> word)
    {
        g1.push_back(word);
        s1.insert(word);
        p1 += 3;
    }

    getline(cin, words);
    stringstream w2(words);
    while(w2 >> word) 
    {
        int olds = s1.size();
        s1.insert(word);
        if(olds == s1.size())
        {
            p1 -= 2;
            p2++;
            s2.insert(word);
        }
        else p2 += 3;
    }

    getline(cin, words);
    stringstream w3(words);
    while(w3 >> word) 
    {
        int olds = s1.size();
        s1.insert(word);
        if(olds == s1.size())
        {
            int prevs = s2.size();
            s2.insert(word);
            if(prevs == s2.size())
            {
                p1--;
                p2--;
            }
            else
            {
                p3++;
                if(check(g1, word)) p1 -= 2;
                else p2 -= 2;
            }
        }
        else p3 += 3;
    }

    cout << p1 << " " << p2 << " " << p3 << endl;
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}