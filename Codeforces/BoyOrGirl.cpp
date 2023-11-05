#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define endl "\n"
#define SSK ios_base::sync_with_stdio(0); cin.tie(0);

int count(char* str)
{
	int hash[128] = { 0 };
	int i, c = 0;

	for (i = 0; i < strlen(str); ++i)
		hash[str[i]] = 1;

	for (i = 0; i < 128; ++i)
        c += hash[i];

	return c;
}

signed main()
{
	SSK

	char str[100];
	gets(str);

	if(count(str)%2==0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

	return 0;
}
