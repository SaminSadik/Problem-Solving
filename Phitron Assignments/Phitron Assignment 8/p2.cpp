#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

int Search(int l, int r)
{
	if(l <= r)
	{
		int mid = (l+r)/2;
		if(k < a[mid]) return Search(l, mid-1);
		else if(k > a[mid]) return Search(mid+1, r);
		else return mid;
	}
	cout << "Not Found";
	return -1;
}

int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int x; cin >> x;
		a.push_back(x);
	}
	cin >> k;

	int l = 0, r = n-1;
	int ans = Search(l, r);
    if(ans >= 0) cout << ans;
	
	return 0;
}