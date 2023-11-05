#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

signed main()
{
    SSK

    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	int card, power = 0;
    	priority_queue <int> pq;
    	for(int i=0; i<n; i++)
    	{
    		cin >> card;
    		if(!card && pq.size())
    		{
    			power += pq.top();
    			pq.pop();
    		}
    		else if(card) pq.push(card);
    	}
    	cout << power << endl;
    }

    return 0;
}