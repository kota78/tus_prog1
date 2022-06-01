#include <stdio.h>
#define NMAX 5

main()
{
    int a[NMAX], i;
    int *po;

    for(i=0; i<NMAX; i++)
        {
            a[i]=i*10;
        }

    po=a;
    while(po<a+NMAX)
        {
            printf("address = %u, value = %d\n", po,*po);
            po++;
        }
}