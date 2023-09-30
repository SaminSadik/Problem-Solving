#include<stdio.h>
void pass_by_value(int x, int y)
{ 
    int temp = x;
    x = y;
    y = temp;
}
void pass_by_reference(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
} 
int main()
{
    int x=20, y=23;
    printf("x = %d & y = %d\n", x, y);

    pass_by_value(x, y);
    printf("x = %d & y = %d\n", x, y);
    /* values were changed locally in the function,
    so changes don't apply to the original variables */
    int *xp = &x, *yp = &y;    
    pass_by_reference(xp, yp);
    printf("x = %d & y = %d\n", x, y);
    //values were changed directly in the memory address using pointers

    return 0;
}