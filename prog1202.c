#include<stdio.h>


typedef struct dcomp
{
    double Re, Im;
} DCOMPLEX;

main()
{
    DCOMPLEX x,y,z;
    DCOMPLEX seki(DCOMPLEX, DCOMPLEX);
    DCOMPLEX read_dcomp();

    x=read_dcomp();
    y=read_dcomp();

    z=seki(x,y);
    printf("(%f+%fi) * (%f+%fi) = %f+%fi\n", x.Re,x.Im, y.Re,y.Im, z.Re,z.Im);
}

DCOMPLEX seki(DCOMPLEX x, DCOMPLEX y)
{
    DCOMPLEX z;

    z.Re = x.Re*y.Re - x.Im*y.Im;
    z.Im = x.Re*y.Im + x.Im*y.Re;
    return z;
}

DCOMPLEX read_dcomp()
{
    DCOMPLEX a;

    printf("Input the Real part & Imaginary part: ");
    scanf("%lf %lf", &(a.Re), &(a.Im));
    return a;
}