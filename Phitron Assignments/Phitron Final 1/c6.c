#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int tiger=0, pathan=0;

    while(n--)
    {
        int t, p;
        scanf("%d %d", &t, &p);
        if(t>p) tiger++;
        else if(p>t) pathan++;
    }

    if(tiger>pathan) printf("Tiger");
    else if(tiger<pathan) printf("Pathan");
    else printf("Draw");

    return 0;
}