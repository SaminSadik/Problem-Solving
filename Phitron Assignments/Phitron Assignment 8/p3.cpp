#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
bool flag = false;

void Search(int l, int r)
{
	if(l <= r)
	{
		int mid = (l+r)/2;
		if(k < a[mid]) Search(l, mid-1);
		else if(k > a[mid]) Search(mid+1, r);
		else if(mid < n-1) if(a[mid+1] == k) flag = true;
	}
	return;
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
	
	int l = 0, r = n/2;
	Search(l, r);
	
	if(flag) cout << "YES";
	else cout << "NO";
	
	return 0;
}