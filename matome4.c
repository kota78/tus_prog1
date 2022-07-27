#include<stdio.h>
#include<math.h>

int main(void) {
    int i, j, k, x;
    int a[4][4]={
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0}
    };
    //A^2
    int b[4][4], c[4][4], d[4][4];
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            x=0;
            for(k=0;k<4;k++) {
                x+=a[i][k]*a[k][j];
            }
            b[i][j]=x;
        }
    }
    printf("A^2\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d,", b[i][j]);
        }
        printf("\n");
    }
    //A^3
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            x=0;
            for(k=0;k<4;k++) {
                x+=b[i][k]*a[k][j];
            }
            c[i][j]=x;
        }
    }
    printf("A^3\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d,", c[i][j]);
        }
        printf("\n");
    }
    //A^3
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            x=0;
            for(k=0;k<4;k++) {
                x+=c[i][k]*a[k][j];
            }
            d[i][j]=x;
        }
    }
    printf("A^4\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d,", d[i][j]);
        }
        printf("\n");
    }
}