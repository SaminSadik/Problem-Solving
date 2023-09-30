#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void Merge(int l, int r, int mid)
{
    int Left[mid-l+2];
    int Right[r-mid+1]; 

    for(int i=l, j=0; i<=mid; i++, j++) Left[j] = a[i];
    for(int i=mid+1, j=0; i<=r; i++, j++) Right[j] = a[i];

    Left[mid-l+1] = INT_MIN;
    Right[r-mid] = INT_MIN;

    int Lp=0, Rp=0;
    for(int i=l; i<=r; i++)
    {
        if(Left[Lp] >= Right[Rp])
        {
            a[i] = Left[Lp];
            Lp++;
        }
        else
        {
            a[i] = Right[Rp];
            Rp++;
        }
    }
}

void MergeSort(int l, int r)
{
    if(l==r) return;

    int mid = (l+r)/2;
    MergeSort(l, mid);
    MergeSort(mid+1, r);
    
    Merge(l, r, mid);
}

int main()
{
    int m; cin >> m;
    for(int i=0; i<m; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }

    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        a.push_back(x);
    }

    MergeSort(0, m+n-1);

    for(auto e : a) cout << e << " ";

    return 0;
}