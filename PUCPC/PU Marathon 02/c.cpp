// Not Working

#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*
bool div(string s) {
    int i, carry = 0;
    for(i=0; i<s.size(); i++)
    {
        s[i] = (char)(s[i] + carry);
        carry = (s[i]-'0') % 4;
    }
    if(carry % 4) return false;
    else return true;
}
bool check(string s1, string s2) {
    if(s1.size() > s2.size())
    {
        return false;
    }
    else if(s1.size() <= s2.size())
    {
        return true;
    }
    else{
        if(s1 == s2) return true;
        else {
            for(int i=0; i<s1.size(); i++)
            {
                if(s1[i]<s2[i]) return true;
            }
            return false;
        }
    }
}
string add(string s1, string s2) {
    if(s1.size() > s2.size()) swap(s1, s2);
    string s = "";

    int n1=s1.size(), n2=s2.size();
    int n = n2 - n1, carry = 0;

    for(int i=n1-1; i>=0; i--)
    {
        int sum = ((s1[i]-'0') + (s2[i+n]-'0') + carry);
        s.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((s2[i]-'0')+carry);
        s.push_back(sum%10 + '0');
        carry = sum/10;
    }
    // if(carry) s.push_back(carry + '0');
    reverse(s.begin(), s.end());

    return s;
    
}
string up(string s) { 
    string L;
    int n = s.size() - 1, carry = 0;

    for(int i=0; i<=n || carry; ++i)
    {
        carry += ((s[n-i] - '0') * 3);
        L += (carry % 10 + '0');
        carry /= 10;
    }
    // if(carry) L.push_back(carry + '0');
    reverse(L.begin(), L.end());

    int last = L.size() - 1;
    while(L[last]=='0')
    {
        L[last] = '9';
        last--;
    }
    L[last] -= 1; 

    return L;
}

int main()
{
    IOS

    string h; cin >> h;

    string l = "5", c = "40";
    while(div(c) || check(l, h))
    {
        c = add(c, up(l));
        l = add(l, "1");
    }
    cout << l;

    return 0;
}
*/

///*
int solve()
{
    IOS

    long long h, l=5, c=40;
    cin >> h;
    while(c%4 || l<=h)
    {
        c += ((3*l)-1);
        l++;
    }
    cout << c << " , " << l << endl << endl;

    return 0;
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
//*/