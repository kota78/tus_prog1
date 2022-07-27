#include <stdio.h>
#include <math.h>

double func(double x) {
    double y=(4*x-1)/(2*x*x+5*x+2);
    return y;
}
int main(void) {
    int i;
    int nmax=100;
    double y, x, dx, sum;
    //範囲//
    double a=0, b=1;

    dx = (b-a)/nmax;
    sum = 0.0;
//daikei
    for(i=0;i<nmax;i++)
        {
            x=a+i*dx;
            y=(func(x)+func(x+dx))*0.5;
            sum+=y*dx;
        }
    printf("Sdaikei = %15.7e\n", sum);

    sum=0.0;
//sinp
    for(i=1;i<=nmax-1;i+=2)
	{
		x=a+i*dx;
		y=(func(x))*4.0/3.0;
		sum+=y*dx;
	}
	for(i=2;i<=nmax-2;i+=2)
	{
		x=a+i*dx;
	y=(func(x))*2.0/3.0;
	sum+=y*dx;
	}
	y=(func(a)+func(b))*1.0/3.0;
	sum+=y*dx;

	printf("Ssinp = %15.7e\n",sum);


}