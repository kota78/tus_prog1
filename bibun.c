#include <stdio.h>
#include <math.h>

double ux1(double x)
{
    return cos(x);
}

double ux2(double x)
{
    return sin(x);
}

double ux3(double x)
{
    return pow(x, cos(x));
}

double ux4(double x)
{
    return tan(x);
}

main()
{
    double h = 0.01;
    double c1[3], c2, s1[3], s2, x = 1.0;

    c1[0] = (ux1(x + h) - ux1(x - h)) / 2.0 / h;
    c1[1] = (ux1(x + h) - ux1(x)) / h;
    c1[2] = (ux1(x) - ux1(x - h)) / h;

    c2 = (ux1(x + h) - 2.0 * ux1(x) + ux1(x - h)) / pow(h, 2);

    s1[0] = (ux2(x + h) - ux2(x - h)) / 2.0 / h;
    s1[1] = (ux2(x + h) - ux2(x)) / h;
    s1[2] = (ux2(x) - ux2(x - h)) / h;

    s2 = (ux2(x + h) - 2.0 * ux2(x) + ux2(x - h)) / pow(h, 2);

    printf("Tyusin cos'(1)=%lf\n", c1[0]);
    printf("Zensin cos'(1)=%lf\n", c1[1]);
    printf("Koutai cos'(1)=%lf\n", c1[2]);
    printf("Genmitsu cos'(1)=%lf\n", -sin(1.0));
    printf("Tyusin cos''(1)=%lf\n", c2);
    printf("Genmitsu cos''(1)=%lf\n", -cos(1.0));
    printf("Tyusin sin'(1)=%lf\n", s1[0]);
    printf("Zensin sin'(1)=%lf\n", s1[1]);
    printf("Koutai sin'(1)=%lf\n", s1[2]);
    printf("Genmitsu sin'(1)=%lf\n", cos(1.0));
    printf("Tyusin sin''(1)=%lf\n", s2);
    printf("Genmitsu sin''(1)=%lf\n", -sin(1.0));

    double p1[3], p2;
    x = M_PI;

    p1[0] = (ux3(x + h) - ux3(x - h)) / 2.0 / h;
    p1[1] = (ux3(x + h) - ux3(x)) / h;
    p1[2] = (ux3(x) - ux3(x - h)) / h;

    p2 = (ux3(x + h) - 2.0 * ux3(x) + ux3(x - h)) / pow(h, 2);

    printf("Tyusin pow'(M_PI, cos(M_PI)))=%lf\n", c1[0]);
    printf("Zensin pow'(M_PI, cos(M_PI)))=%lf\n", c1[1]);
    printf("Koutai pow'(M_PI, cos(M_PI)))=%lf\n", c1[2]);
    printf("Genmitsu pow'(M_PI, cos(M_PI)))=%lf\n", pow(M_PI, (cos(M_PI) - 1) * (cos(M_PI) - (M_PI)*sin(M_PI) * log(M_PI))));
    printf("Tyusin pow''(M_PI, cos(M_PI)))=%lf\n", c2);
    printf("Genmitsu pow''(M_PI, cos(M_PI)))=%lf\n", -pow(M_PI, cos(M_PI)));

    double t1[3], z = 1;

    t1[0] = (ux4(x + h) - ux4(x - h)) / 2.0 / h;
    t1[1] = (ux4(x + h) - ux4(x)) / h;
    t1[2] = (ux4(x) - ux4(x - h)) / h;

    printf("Tyusin tan'(1)=%lf\n", s1[0]);
    printf("Zensin tan'(1)=%lf\n", s1[1]);
    printf("Koutai tan'(1)=%lf\n", s1[2]);
    printf("Genmitsu tan'(1)=%lf\n", 1 / (cos(1.0) * cos(1.0)));

    h = 0.0001;
    x = 1.0;

    c1[0] = (ux1(x + h) - ux1(x - h)) / 2.0 / h;
    c1[1] = (ux1(x + h) - ux1(x)) / h;
    c1[2] = (ux1(x) - ux1(x - h)) / h;

    c2 = (ux1(x + h) - 2.0 * ux1(x) + ux1(x - h)) / pow(h, 2);

    s1[0] = (ux2(x + h) - ux2(x - h)) / 2.0 / h;
    s1[1] = (ux2(x + h) - ux2(x)) / h;
    s1[2] = (ux2(x) - ux2(x - h)) / h;

    s2 = (ux2(x + h) - 2.0 * ux2(x) + ux2(x - h)) / pow(h, 2);

    printf("Tyusin cos'(1)=%lf\n", c1[0]);
    printf("Zensin cos'(1)=%lf\n", c1[1]);
    printf("Koutai cos'(1)=%lf\n", c1[2]);
    printf("Genmitsu cos'(1)=%lf\n", -sin(1.0));
    printf("Tyusin cos''(1)=%lf\n", c2);
    printf("Genmitsu cos''(1)=%lf\n", -cos(1.0));
    printf("Tyusin sin'(1)=%lf\n", s1[0]);
    printf("Zensin sin'(1)=%lf\n", s1[1]);
    printf("Koutai sin'(1)=%lf\n", s1[2]);
    printf("Genmitsu sin'(1)=%lf\n", cos(1.0));
    printf("Tyusin sin''(1)=%lf\n", s2);
    printf("Genmitsu sin''(1)=%lf\n", -sin(1.0));

    x = M_PI;

    p1[0] = (ux3(x + h) - ux3(x - h)) / 2.0 / h;
    p1[1] = (ux3(x + h) - ux3(x)) / h;
    p1[2] = (ux3(x) - ux3(x - h)) / h;

    p2 = (ux3(x + h) - 2.0 * ux3(x) + ux3(x - h)) / pow(h, 2);

    printf("Tyusin pow'(M_PI, cos(M_PI)))=%lf\n", c1[0]);
    printf("Zensin pow'(M_PI, cos(M_PI)))=%lf\n", c1[1]);
    printf("Koutai pow'(M_PI, cos(M_PI)))=%lf\n", c1[2]);
    printf("Genmitsu pow'(M_PI, cos(M_PI)))=%lf\n", pow(M_PI, (cos(M_PI) - 1) * (cos(M_PI) - (M_PI)*sin(M_PI) * log(M_PI))));
    printf("Tyusin pow''(M_PI, cos(M_PI)))=%lf\n", c2);
    printf("Genmitsu pow''(M_PI, cos(M_PI)))=%lf\n", -pow(M_PI, cos(M_PI)));

    t1[0] = (ux4(x + h) - ux4(x - h)) / 2.0 / h;
    t1[1] = (ux4(x + h) - ux4(x)) / h;
    t1[2] = (ux4(x) - ux4(x - h)) / h;

    printf("Tyusin tan'(1)=%lf\n", s1[0]);
    printf("Zensin tan'(1)=%lf\n", s1[1]);
    printf("Koutai tan'(1)=%lf\n", s1[2]);
    printf("Genmitsu tan'(1)=%lf\n", 1 / (cos(1.0) * cos(1.0)));
}