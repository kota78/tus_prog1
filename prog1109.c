#include<stdio.h>
#define NMAX 256

main()
{
    char a[NMAX], *po;

    printf(" Input a word: ");
    scanf("%s", a);
    po=a;
    while(*po!='\0')
    {
        if(*po <= 'z' && *po >= 'a')
            *po = *po + 'A'-'a';
        printf("%c", *po);
        po++;
    }
    printf("\n");
    printf("%s\n", a);
}