#include<stdio.h>
#define NMAX 256

int main(void)
{
    char *po;
    char a[NMAX]="Tokyo University of Science";
    po=a;
    while(*po!='\0')
    {
        if(*po <= 'p' && *po >= 'a') {
            *po = *po + 10;
        } else if (*po <= 'z' && *po >= 'q')
        {
            *po = *po - 16;
        } else if (*po <= 'P' && *po >= 'A')
        {
            *po = *po + 10;
        } else if (*po <= 'Z' && *po >= 'Q')
        {
            *po = *po - 16;
        }
        printf("%c", *po);
        po++;
    }
    printf("\n");
}