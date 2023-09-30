#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n-1, d = 1;
    for(int i=1; i<2*n; i++)
    {
        for(int j=1; j<=s; j++) printf(" ");
        for(int j=1; j<=d; j++) printf("%d", j);
        printf("\n");
        if(i<n) {
            s--; d+=2;
        }
        else {
            s++; d-=2;
        }
    }
    return 0;
}