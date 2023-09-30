#include<stdio.h>
int count_before_zero(int a[], int n)
{
    for(int i=0; i<n; i++) if(!a[i]) return i;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int ans = count_before_zero(a, n);
    printf("%d", ans);
    return 0;
}