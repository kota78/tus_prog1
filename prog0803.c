#include <stdio.h>
#include<math.h>
#define NMAX 1000

main()
{
	double x[NMAX], sum=0.0, average, sum2=0.0, sigma;
	int i,n;
	printf("Input the number of DATA: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
		{
			printf("Input %d-th DATA: ", i+1);
			scanf("%lf",&(x[i]));
		}
	for(i=0; i<n; i++)
		{
			sum += x[i];
			sum2 += pow(x[i],2);
		}
	average = sum/n;
	sigma = sqrt(sum2/n-pow(average,2));
	printf("Average = %lf, Sigma = %lf\n",average, sigma);
}