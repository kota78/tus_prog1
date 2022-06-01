#include<stdio.h>

main()
{
    int b, a;
    void exchange(int, int);

    printf("Input integers a & b: ");
    scanf("%d, %d", &a, &b);
    printf("a = %d, b = %d\n", a,b);
    printf("The address of a = %u\n", &a);
    printf("The address of b = %u\n", &b);
    exchange(a, b);
    printf("--main--\n");
    printf("a = %d, b = %d", a,b);
}

void exchange(int a, int b)
{
    int c;

    printf("--function exchange--\n");
    printf("a = %d, b = %d\n", a,b);
    printf("The address of a = %u\n", &a);
    printf("The address of b = %u\n", &b);
    printf("The address of c = %u\n", &c);
    c=a;
    a=b;
    b=c;
    printf("a = %d, b = %d\n", a,b);
}
