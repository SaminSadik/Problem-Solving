#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=(i+1); j<n; j++)
        {
            if(ar[j] <ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    if(n%2 == 0) printf("%d ", ar[(n/2)-1]);
    printf("%d", ar[n/2]);

    return 0;
}