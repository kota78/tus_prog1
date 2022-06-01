#include<stdio.h>

main()
{
    char a[]="Kyushu", *po;
    po=a;
    while(*po!='\0')
    {
        if(*po <= 'z' && *po >= 'a')
            *po = *po + 'A'-'a';
        printf("%c", *po);
        po++;
    }
    printf("\n");
}