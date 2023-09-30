#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1, s=n-1; i<=n; i++, s--)
    {
        for(int j=0; j<s; j++) printf(" ");
        for(int j=0; j<i; j++) printf("%d", i);
        printf("\n");
    }
    return 0;
}