#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space=(n-1), x=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<space; j++) printf(" ");
        for(int j=0; j<x; j++)
        {
            if(i%2) printf("^");
            else printf("*");
        }
        printf("\n");
        x += 2;
        space--;
    }

    return 0;
}