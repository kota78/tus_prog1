#include<stdio.h>

void watasu(int*, int);
int main() {
    int *pa, a, b;
    a = 1;
    b = 1;
    pa = &a;
    printf("a=%d, b=%d\n", a,b);
    watasu(pa, b);
    printf("a=%d, b=%d\n", a,b);
}

void watasu(int *pa, int b) {
    *pa= 0;
    b= 0;
    printf("a=%d, b=%d\n", *pa,b);
}