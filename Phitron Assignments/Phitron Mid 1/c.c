#include<stdio.h>

int main()
{
    double m1, m2, d;
    scanf("%lf %lf %lf", &m1, &m2, &d);

    int ans = (m1/m2)*d;
    printf("%d", ans);

    return 0;
}