#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int d, sumTime;
    cin >> d >> sumTime;

    vector <int> minH(d), maxH(d);
    int least=0, most=0;  
    for(int i=0; i<d; i++)
    {
        cin >> minH[i] >> maxH[i];
        least += minH[i];
        most += maxH[i];
    }

    if(sumTime<least || sumTime>most) cout << "NO";
    else {
        cout << "YES\n";
        for(int i=0; i<d; i++)
        {
            while(1)
            {
                if(sumTime-minH[i] > most-maxH[i]) minH[i]++;
                else {
                    cout << minH[i] << " ";
                    sumTime -= minH[i];
                    most -= maxH[i];
                    break;
                }
            }
        }
    }

    return 0;
}