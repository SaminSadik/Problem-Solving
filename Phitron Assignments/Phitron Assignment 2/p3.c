#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int v, evens=0, odds=0;
    while(n--)
    {
        scanf("%d", &v);
        if(v%2) odds += v;
        else evens += v;
    }
    printf("%d %d", evens, odds);

    return 0;
}