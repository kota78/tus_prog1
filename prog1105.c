#include <stdio.h>
#define NMAX 5

main()
{
	int i;
	double a[NMAX];
	void Reverse(double *);

	for(i=0; i<NMAX; i++)
	{
	a[i]=i*0.1;
	printf("a[%d] = %f\n",i,a[i]);
	}
    Reverse(a);
	for(i=0; i<NMAX; i++)
	{
	printf("a[%d] = %f\n",i,a[i]);
	}
}

void Reverse(double *a)
{
	int i;
	double b[NMAX];
	for(i=0; i<NMAX; i++)
	{
	b[i]=*(a+i);
	}
	for(i=0; i<NMAX; i++)
	{
        *(a+i)=b[NMAX-i-1];
	}
}