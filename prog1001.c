#include <stdio.h>

main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = a + b;
    printf("Value of a =%d, address of a =%u\n", a, &a);
    printf("Value of b =%d, address of b =%u\n", b, &b);
    printf("Value of c =%d, address of c =%u\n", c, &c);
}