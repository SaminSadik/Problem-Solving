#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m[5][5];

    int I, J;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> m[i][j];
            if(m[i][j]==1)
            {
                I=i;
                J=j;
            }
        }
    }

    int ans = abs(I-2) + abs(J-2);

    cout << ans << endl;

    return 0;
}

