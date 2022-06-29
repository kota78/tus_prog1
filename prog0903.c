#include <stdio.h>

main()
{
    int i, nmax;
    double ds, x, dx, sum, a, b;
    double func1(double);

    printf("Input the range of integration: [x1, x2]");
    scanf("%lf %lf", &a, &b);
    printf("Input the number of small intervals:");
    scanf("%d", &nmax);

    dx = (b-a)/nmax;
    sum = 0.0;

    for(i=0;i<nmax;i++)
        {
            x=a+i*dx;
            ds=(func1(x)+func1(x+dx))*dx/2;
            sum+=ds;
        }
    printf("The integral = %15.7e\n", sum);
}

double func1(double x)
{
    double y;
    
    y=x*x;
    return y;
}