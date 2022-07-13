#include<stdio.h>
#include<math.h>
#define K 10

int main(){
	int t;
	double x,xa;
	double v,va;
	double dt;
	double y;

	dt=0.001;
	double c;
	x=1.0;
	y=1.0;
	v=0.0;

	for(t=1; t<=70000; t++){
	xa = x + dt*v;
	va = v - K*x*dt;

	x = xa;
	v = va;
	y = cos(sqrt(K)*t*0.001);
    if(t%70==0) {
            printf("%f %f %f\n", t*0.001, y, x);
        }
	}

	return 0;
}
