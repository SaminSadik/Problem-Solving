//incomplete

#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS

    int n; cin >> n;
    int a[n], pre_dup=0, cur_dup=0, ins=n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((a[i]==a[j]) && (i != j))
            {
                if(!pre_dup) cur_dup++;
                else{
                    pre_dup--;
                    ins-=2;
                }
            }
        }
        //cout << "Cur Dup: " << cur_dup << endl;
        pre_dup += cur_dup;
        cur_dup = 0;
        //cout << "Pre dup: " << pre_dup << endl << "Cur Cards(ins): " << ins <<endl<<endl;
    }
    cur_dup += pre_dup;
    //cout << "Pre dup: " << pre_dup << endl << "Cur Dup: " << cur_dup << endl << "Cur Cards(ins): " << ins <<endl;
    int ans = ins - (cur_dup * 2);
    if(ans<0) ans = 0;

    cout << ans;

    return 0;
}

// sort the initial array/vector
// take a vector to count dups for every unique number
// take ind=0 outside loop & ++ it when a new number is found. The final ind value will be the amount of uniques
// to eat a dup with another dup, it must have a prev number & a after number dupe,
// or a dupe of itself & a dupe of prev/after number.
// else another unique number have to be eaten with that dup (may need to calculate other things in that case)