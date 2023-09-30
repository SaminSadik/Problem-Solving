#include <bits/stdc++.h>
using namespace std;

#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    SSK

    string w1, w2;
    while(cin >> w1 >> w2)
    {
        int j = 0;
        for(int i=0; i<w1.size(); i++)
        {
            if((j<w2.size()) && (w1[i]==w2[j])) j++;
        }
        if(j == w2.size()) cout << "Possible\n";
        else cout << "Impossible\n";
    }

    return 0;
}