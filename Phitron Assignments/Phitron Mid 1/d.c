#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    scanf("%s", &s);

    int cap = 0, sml = 0;

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z') sml++;
        else cap++;
    }

    printf("%d %d", cap, sml);

    return 0;
}