#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        string x; cin >> x;
        int s = x.size(), mark = 0;
        for(int i=s-1; i>0; i--)
        {
            if(x[i]>'4')
            {
                if(x[i-1] != '9')
                {
                    x[i-1]++;
                    mark = i;
                }
                else
                {
                    i--;
                    while(i>0 && x[i-1] == '9') i--;
                    if(i>0) 
                    {
                        x[i-1]++;
                        mark = i;
                    }
                }
            }
        }

        if(x[0] > '4')
        {
            x = "1";
            for(int i=0; i<s; i++) x += "0";
        }
        else if(mark>0) for(int i = mark; i<s; i++) x[i] = '0';

        cout << x << endl;
    }

    return 0;
}

/* 
// TLE on test 12
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS

    int t; cin >> t;
    while(t--)
    {
        string x; cin >> x;
        int s = x.size();
        if(s>1)
        {
            for(int i=0; i<s; i++)
            {
                if(x[i]>'4')
                {
                    int I = i;
                    if(i == 0)
                    {
                        x = "1";
                        for(int i=0; i<s; i++) x += "0";
                    }
                    else if(x[i-1] != '9')
                    {
                        x[i-1]++;
                        while(i<s) x[i++] = '0';
                        if(I-1 >= 0) i = I-2;
                    }
                    else
                    {
                        i--;
                        for(int j=i; j<s; j++) x[j] = '0';
                        while(true)
                        {
                            if(i == 0)
                            {
                                x[0] = '1';
                                x += "0";
                                break;
                            }
                            else if(x[i-1]!='9')
                            {
                                x[i-1]++;
                                if(I-1 >= 0) i = I-2;
                                break;
                            }
                            i--;
                        }
                    }
                }
            }
        }
        else if(x[0]>'4') x = "10";

        cout << x << endl;
    }

    return 0;
}
 */