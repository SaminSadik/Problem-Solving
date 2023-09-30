#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS

	int n, a; cin >> n;
	set<int> st;
	for (int i=0; i<n; ++i)
    {
		cin >> a;
		st.insert(a);
	}

    int ans;
    if((st.size()==n) || (st.size() % 2)) ans = st.size();
    else ans = (st.size()-1);
    cout << ans << endl;

	return 0;
}
