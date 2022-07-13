#include <stdio.h>
#include <math.h>

main()
{
	double x[70002], v[70002], x1[70001], r,a;
	int i;
	x[0] = -1.0;
	v[0] = 0.0;
	v[1] = v[0] - 0.01*x[1];
	r= sqrt(10);
	a = cos(0.07*r);

	for(i=0; i <= 70000; i++)
	{
		x[i+1]=(x[i]+0.001*v[i])/(1+(pow(0.001, 2)*10));
		v[i+1] = v[i] -0.01*x[i+1];
	}

	for(i=0; i<=70000; i++)
	{
	x1[i] = -cos(0.001*r*i);
	}

	for(i=0; i <=70000; i = i +70)
	{
	printf("%lf,%lf,%lf\n ",i*0.001,x1[i],x[i]);
	}
}
