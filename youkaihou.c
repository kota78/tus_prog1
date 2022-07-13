#include <stdio.h>
#include <math.h>

main()
{
	double x[70000], v[70000], x1[70000], r,a;
	int i;
	x[0] = 1;
	x[1] = 1;
	v[0] = 0;
	r= sqrt(10);
	printf("%lf\n",r);
	a = cos(0.07*r);
	printf("%lf\n",a);

	for(i=0; i <= 69998; i++)
	{
		v[i+1] = v[i] -0.01*x[i];
		x[i+2] = x[i+1] + 0.001*v[i+1];
	}

	for(i=0; i<=70000; i++)
	{
	x1[i] = cos(0.001*r*i);
	}

	for(i=0; i <=70000; i = i +70)
	{
	printf("%lf,%lf,%lf\n ",i*0.001,x1[i],x[i]);
	}
}
