#include <stdio.h>

main()
{
    int Number1, Number2;
    int Sum, Dif, Pro, Quo, Rem;

    printf(" Input the Number 1: ");
    scanf("%d", &Number1);
    printf(" Input the Number 2: ");
    scanf("%d", &Number2);

    Sum = Number1 + Number2;
    Dif = Number1 - Number2;
    Pro = Number1 * Number2;
    Quo = Number1 / Number2;
    Rem = Number1 % Number2;

    printf(" %d + %d = %d\n", Number1, Number2, Sum);
    printf(" %d - %d = %d\n", Number1, Number2, Dif);
    printf(" %d * %d = %d\n", Number1, Number2, Pro);
    printf(" %d / %d = %d\n", Number1, Number2, Quo);
    printf(" %d %% %d = %d\n", Number1, Number2, Rem);
}
