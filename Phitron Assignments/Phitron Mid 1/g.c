#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s", &s);

    int a[123] = {0};

    for(int i=0; i<strlen(s); i++)
    {
        a[(int)s[i]]++;
    }

    for(int i=97; i<123; i++)
    {
        printf("%c - %d\n", i, a[i]);
    }

    return 0;
}