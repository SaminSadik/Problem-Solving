#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    double duration, down_pay, loan, depreciation;
    vector <double> dp(101);
    //double dp[101];

    while(true)
    {
        cin >> duration >> down_pay >> loan >> depreciation;
        if(duration<0) break;

        int m; double p;
        while(depreciation--)
        {
            cin >> m >> p;
            for(int i = m; i<101; i++) dp[i] = p;
        }

        int ans = 0;
        double mon_pay = loan / duration,
        curVal = (loan + down_pay) * (1 - dp[0]),
        curLoan = loan;

        while(curVal < curLoan)
        {
            ans++;
            curLoan -= mon_pay;
            curVal *= (1 - dp[ans]);
        }

        cout << ans << " month";
        if(ans != 1) cout << "s";
        cout << endl;
    }

    return 0;
}