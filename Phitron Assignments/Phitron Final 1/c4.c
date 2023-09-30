#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    int cap=0, sml=0, spc=0;

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='A' && s[i]<='Z') cap++;
        if(s[i]>='a' && s[i]<='z') sml++;
        if(s[i]==' ') spc++;
    }

    printf("Capital - %d\n", cap);
    printf("Small - %d\n", sml);
    printf("Spaces - %d\n", spc);

    return 0;
}