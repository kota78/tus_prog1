#include <stdio.h>
#include <math.h>

double f(double x)
{
    return log(x+sqrt(pow(x,2)+1));
}
int main(void) {
    double h=0.01, x=3.0, a;
    a = (f(x + h) - f(x - h)) / 2.0 / h;
    printf("%lf\n", a);
}