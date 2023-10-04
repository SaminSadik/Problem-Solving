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

// TLE but cleaner Solution:

/* 
#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

string word, words;
map<string, int> Map;

void get_words(vector<string>& p)
{
    getline(cin, words);
    stringstream w(words);
    while(w >> word)
    {
        p.push_back(word);
        Map[word]++;
    }
}

int points(vector<string> p, int i)
{
    if(Map[p[i]]==1) return 3;
    else if(Map[p[i]]==2) return 1;
    else return 0;
}

void solve()
{
    int n; cin >> n;
    cin.ignore(); 

    vector<string> p1, p2, p3;
    get_words(p1);
    get_words(p2);
    get_words(p3);

    int s1=0, s2=0, s3=0;
    for(int i=0; i<n; i++)
    {   
        s1 += points(p1, i);
        s2 += points(p2, i);
        s3 += points(p3, i);
    }

    cout << s1 << " " << s2 << " " << s3 << endl;
    Map.clear();
}

signed main()
{
    SSK

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
*/