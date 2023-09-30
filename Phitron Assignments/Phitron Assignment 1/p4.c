#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=21; i<=n; i+=21)
    {
        printf("%d\n", i);
    }

    return 0;
}