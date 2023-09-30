#include<stdio.h>

void function1() //no parameter or return
{
    printf("My name is Samin Sadik Khan\n");
}
int function2() //returns but no parameter
{
    return 100;
}
void function3(int n) //has parameter but no return
{
    printf("%d+", n);
}
float function4(double a, double b) //has parameter & returns
{
    return a+b;
}

int main()
{
    function1();
    printf("My marks will be %d, ", function2());
    function3(50);
    printf("%.0f.", function4(20.23, 30.03));

    return 0;
}