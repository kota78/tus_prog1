#include <stdio.h>
#define NMAX 5

main()
{
    int a[NMAX], i;

    for(i=0; i<NMAX; i++)
    {
        a[i]=i*10;
    }
    for (i=0; i<NMAX; i++)
    {
        printf("index = %d, address = %u, value = %d\n", i, &a[i], a[i]);
    }
}