//Solution of problem 2:

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int ans = 0;
        long long sum = 0;
        map<long long, int> m;
        for(int i=0; i<n; i++){
            sum += a[i];

            if(sum == k) ans=max(ans, i+1);
            else if(m.find(sum-k)!=m.end()) ans = max(ans, i-m[sum-k]);
            
            if(m.find(sum)==m.end()) m[sum] = i;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++) cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends