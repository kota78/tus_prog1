#include<stdio.h>

main()
{
    char a[]="Kyushu", *po;
    po=a;
    while(*po!='\0')
    {
        printf("address = %u, value = %c, integer value = %d\n", po,*po,*po);
        po++;
    }
}