// need to understand

#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*
int32_t main()
{
    int c[100000];
    int n; cin >> n;
    int x, m = -1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        c[x]++;
        m = max(m, x);
    }
    if ((c[m] == n && m == n-1) ||
        (c[m] + c[m-1] == n && c[m-1] < m &&
        (m - c[m-1]) * 2 <= c[m]))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
*/

/*
int32_t main ()
{
    IOS
    int n; cin >> n;
    vector <int> v (n + 1);
    int mn = 1e9, mx = -1;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    if (mx - mn > 1) {
        cout << "No\n";
        return 0;
    }
    sort(v.begin() + 1, v.end());
    int mnc = 0, mxc = 0;
    for (int i = 1; i <= n; i++) {
        if(mn == v[i]) mnc++;
        if (mx == v[i]) mxc++;
    }
 
    if(mx == mn) {
        mnc = 0;
        int maxi = (n - 2) / 2;
        int dis = mx - 1;
        if (dis <= maxi or n - 1 == mx) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
 
        return 0;
    }

    if (mn < (mnc - 1) + 1) {
        cout << "No\n";
        return 0;
    }
    int rem = n - mnc;
    int maxi = rem / 2;
    int dis = mn - (mnc - 1);
    if (dis <= maxi) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
} 
*/

/*
int main()
{
	IOS
	int n;
	cin >> n;
	vector<int> a(n); 
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	bool res = false;
	if(a[0] == a[n - 1]) {
		if(a[0] == n - 1 ||  2 * a[0] <= n)  res = true;
	}
	else {
		int c1 = 0, c2 = 0;
		for (int i = 0; i < n; i++) {
			c1 += (a[i] == a[0]);
			c2 += (a[n - 1] == a[i]);
		}
		if(c1 + c2 == n && c1 <= a[0] && a[0] + 1 == a[n - 1]) {
			int tmp = a[0] + 1 - c1;
			if(c2 >= 2 * tmp)
				res = true;
		}
	}
	cout << (res ? "Yes" : "No")<< "\n";
	return 0;
}
*/

/*
int main ()
{
    IOS 
    int n; cin>>n;
    int arr[n+5]; 
    for(int i=0;i<n;i++) cin>>arr[i]; 
    sort(arr,arr+n);
 
    if(arr[n-1]>arr[0]+1)
    {
        cout<<"No\n";
        return 0;
    }
 
    if(arr[0]==arr[n-1])
    {
        if(arr[0]==n-1 or 2*arr[0]<=n)
            cout<<"Yes\n";
        else cout<<"No\n";
        return 0;
    }
 
    int cnt1= 0, cnt2= 0; 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[0]) cnt1++;
        else cnt2++;
    }
 
    if(cnt1+1<=arr[n-1] and arr[n-1]<=cnt1+cnt2/2)
        cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
*/