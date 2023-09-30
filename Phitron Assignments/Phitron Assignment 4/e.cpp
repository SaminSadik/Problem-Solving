#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    int space1=0, space2=(n-2);
    char L1, L2;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<space1; j++) cout << " ";

        if(i != (n/2)+1)
        {
            if(i <= n/2) {L1='\\'; L2='/';}
            else {L1='/'; L2='\\';}

            cout << L1;
            for(int j=0; j<space2; j++) cout << " ";
            cout << L2;
        }
        else cout << "X";

        for(int j=0; j<space1; j++) cout << " ";
        cout << endl;

        if(i <= (n/2))
        {
            space1++;
            space2 -= 2;
        }
        else 
        {
            space1--;
            space2 += 2;
        }
    }

    return 0;
}

/*
https://www.hackerrank.com/SSKsan
@SSKsan
*/