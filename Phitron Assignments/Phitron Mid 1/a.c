#include<stdio.h>

int main()
{
    int n, a, even = 0, odd = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a%2) odd++;
        else even++;
    }

    printf("%d %d", even, odd);

    return 0;
}