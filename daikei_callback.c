#include <stdio.h>
#include <math.h>
#define NMAX 100

double func1(double x)
{
    double y;
    y=1.0/x;
    return y;
}

double func2(double x)
{
    double y;
    y=sqrt(2*x-x*x);
    return y;
}

double func3(double x)
{
    double y;
    y=exp(-x)*cos(x);
    return y;
}

double func4(double x)
{
    double y;
    y=x*sqrt(1+x+x*x);
    return y;
}
void output(double a, double b, double(*func)(double)) {
    int i;
    double y, x, dx, sum;
    dx = (b-a)/NMAX;
    sum = 0.0;
    for(i=0;i<NMAX;i++)
        {
            x=a+i*dx;
            y=(func(x)+func(x+dx))*0.5;
            sum+=y*dx;
        }
    printf("The integral1 = %15.7e\n", sum);
}

int main(void)
{
    output(1,2,func1);
    output(0,2,func2);
    output(0,2*M_PI, func3);
    output(0,1,func4);
    return 0;
}
