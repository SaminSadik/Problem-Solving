#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int flag = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                if(m[i][j] != 1) flag = 0;
            }
            else if(m[i][j] != 0) flag = 0;
        }
    }

    if(flag) printf("YES");
    else printf("NO");

    return 0;
}