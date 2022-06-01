#include<stdio.h>
#define NMAX 5

main()
{
    int a[1,2,3,4,5], b[NMAX], i;
    for(i=0; i<NMAX; i++)
    // {
    //     a[i] = i*10;
    //     printf("%d\n", a[i]);
    // }
    for(i=0; i<NMAX; i++)
    {
        b[i] = a[NMAX-1-i];
        printf("%d\n", b[i]);
    }
}