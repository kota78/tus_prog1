#include <stdio.h>

main()
{
    int b,a, *pa, *pb;
    void exchange(int *, int *);

    printf("Input integers a & b: ");
    scanf("%d, %d", &a, &b);
    printf("a: value = %d, address = %u\n", a,&a);
    printf("b: value = %d, address = %u\n", b,&b);
    pa = &a;
    pb = &b;
    exchange(pa, pb);
    printf("--main--\n");
    printf("a = %d, b = %d\n", a,b);
}

void exchange(int *pa, int *pb)
{
    int c;

    printf("--function exchange--\n");
    printf("a: value = %d, address = %u\n", *pa,&pa);
    printf("b: value = %d, address = %u\n", *pb,&pb);
    printf("c: value = %d, address = %u\n", c,&c);
    c=*pa;
    *pa=*pb;
    *pb=c;
    printf("a: value = %d, address = %u\n", *pa,&pa);
    printf("b: value = %d, address = %u\n", *pb,&pb);
    printf("c: value = %d, address = %u\n", c,&c);
}