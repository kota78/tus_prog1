#include<stdio.h>

main()
{
    char a[]="Computer", *po;
    int b=0;
    po=a;
    while(*po!='\0')
    {
        b++;
        po++;
    }
    printf("Number of character is %d\n", b);
}