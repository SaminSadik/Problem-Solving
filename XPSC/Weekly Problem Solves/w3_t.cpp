#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
signed main()
{
    IOS
 
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n;
        m = n;
        vector <int> card;
        while(m--)
        {
            int x; cin >> x;
            card.emplace_back(x);
        }
 
        int power = 0;
        while(card[0]==0 && card.size()>1)
        {
            card.erase(card.begin());
            n--;
        }
        for(int i=0; i<n; i++)
        {
            if(card[i]==0)
            {
                int me = *max_element(card.begin(), card.begin()+i);
                int mi = max_element(card.begin(), card.begin()+i) - card.begin();
                power += me;
                card.erase(card.begin()+mi);
                n--; i--;
            }
        } 
        cout << power << endl;
    }
 
    return 0;
}