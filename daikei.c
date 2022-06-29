#include <stdio.h>
#include <math.h>

double func1(), func2(), func3(), func4();

main()
{
    int i;
    int nmax=100;
    double y, x, dx, sum;
    double func1(double);
    //範囲//
    double a1=1, b1=2;
    dx = (b1-a1)/nmax;
    sum = 0.0;
    for(i=0;i<nmax;i++)
        {
            x=a1+i*dx;
            y=(func1(x)+func1(x+dx))*0.5;
            sum+=y*dx;
        }
    printf("The integral1 = %15.7e\n", sum);

    double a2=0, b2=2;
    dx = (b2-a2)/nmax;
    sum = 0.0;
    for(i=0;i<nmax;i++)
        {
            x=a2+i*dx;
            y=(func2(x)+func2(x+dx))*0.5;
            sum+=y*dx;
        }
    printf("The integral2 = %15.7e\n", sum);

    double a3=0, b3=2*M_PI;
    dx = (b3-a3)/nmax;
    sum = 0.0;

    for(i=0;i<nmax;i++)
        {
            x=a3+i*dx;
            y=(func3(x)+func3(x+dx))*0.5;
            sum+=y*dx;
        }
    printf("The integral3 = %15.7e\n", sum);

    double a4=0, b4=1;
    dx = (b4-a4)/nmax;
    sum = 0.0;
    for(i=0;i<nmax;i++)
        {
            x=a4+i*dx;
            y=(func4(x)+func4(x+dx))*0.5;
            sum+=y*dx;
        }
    printf("The integral4 = %15.7e\n", sum);
}

double func1(double x)
{
    double y;
    y=x*x;
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
