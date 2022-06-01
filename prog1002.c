#include <stdio.h>

main()
{
    int a, b, c;
    int *pt;

    a=10;

    b=20;

    c=a+b;
    pt=&a;
    printf("Value of a =%d, address of a =%u\n", a, &a);

    printf("pt = %d, pt = %u\n", *pt, pt);
    pt=&b;
    printf("Value of b =%d, address of b =%u\n", b, &b);

    printf("pt = %d, pt = %u\n", *pt, pt);
    pt=&c;
    printf("Value of c =%d, address of c =%u\n", c, &c);

    printf("pt = %d, pt = %u\n", *pt, pt);
}