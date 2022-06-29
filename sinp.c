#include <stdio.h>
#include <math.h>

double func1(), func2(), func3(), func4();

main()
{
    int i;
	int nmax=100;
	double y,x,dx,sum;
	double func1(double);

	double a1=1, b1=2;
    double a2=0, b2=2;
    double a3=0, b3=2*M_PI;
    double a4=0, b4=1;

//S1//
	dx = (b1-a1)/nmax;
	sum = 0.0;

	for(i=1;i<=nmax-1;i+=2)
	{
		x=a1+i*dx;
		y=(func1(x))*4.0/3.0;
		sum+=y*dx;
	}
	for(i=2;i<=nmax-2;i+=2)
	{
		x=a1+i*dx;
	y=(func1(x))*2.0/3.0;
	sum+=y*dx;
	}
	y=(func1(a1)+func1(b1))*1.0/3.0;
	sum+=y*dx;

	printf("The integral = %15.7e\n",sum);

//S2//
	dx = (b2-a2)/nmax;
	sum = 0.0;

	for(i=1;i<=nmax-1;i+=2)
	{
		x=a2+i*dx;
		y=(func2(x))*4.0/3.0;
		sum+=y*dx;
	}
	for(i=2;i<=nmax-2;i+=2)
	{
		x=a2+i*dx;
	y=(func2(x))*2.0/3.0;
	sum+=y*dx;
	}
	y=(func2(a2)+func2(b2))*1.0/3.0;
	sum+=y*dx;

	printf("The integral = %15.7e\n",sum);

//S3//
	dx = (b3-a3)/nmax;
	sum = 0.0;

	for(i=1;i<=nmax-1;i+=2)
	{
		x=a3+i*dx;
		y=(func3(x))*4.0/3.0;
		sum+=y*dx;
	}
	for(i=2;i<=nmax-2;i+=2)
	{
		x=a3+i*dx;
	y=(func3(x))*2.0/3.0;
	sum+=y*dx;
	}
	y=(func3(a3)+func1(b3))*1.0/3.0;
	sum+=y*dx;

	printf("The integral = %15.7e\n",sum);

//S4//
	dx = (b4-a4)/nmax;
	sum = 0.0;

	for(i=1;i<=nmax-1;i+=2)
	{
		x=a4+i*dx;
		y=(func4(x))*4.0/3.0;
		sum+=y*dx;
	}
	for(i=2;i<=nmax-2;i+=2)
	{
		x=a4+i*dx;
	y=(func4(x))*2.0/3.0;
	sum+=y*dx;
	}
	y=(func4(a4)+func4(b4))*1.0/3.0;
	sum+=y*dx;

	printf("The integral = %15.7e\n",sum);
}

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
