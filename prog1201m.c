#include<stdio.h>

struct dcomp
{
    double Re, Im;
};

main()
{
    struct dcomp x,y,z;

    x.Re=1.0;
    x.Im=1.0;
    y.Re=1.0;
    y.Im=1.0;

    z.Re = x.Re+y.Re;
    z.Im = x.Im+y.Im;

    printf("(%f+%fi) + (%f+%fi) = %f+%fi\n", x.Re,x.Im, y.Re,y.Im, z.Re,z.Im);
}