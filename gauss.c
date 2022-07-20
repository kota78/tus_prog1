#include <stdio.h>
#define    N 3

double a[N][N+1] =
{
    { 1.0,4.0, 3.0, 1.0},
    { 2.0,5.0,4.0,4.0},
    {1.0,-3.0, -2.0, 5.0}
};

int main(void)
{
    double p,d;
    int i,j,k;

    for(k=0;k<N;k++){
        p = a[k][k];
        for(i=0;i<(N+1);i++){
            a[k][i] = a[k][i] / p;
        }

        for(i=0;i<N;i++){
            if( i != k ){
                d = a[i][k];
                for(j=k;j<(N+1);j++){
                    a[i][j] = a[i][j] - d * a[k][j];
                }
            }
        }
    }

    for(k=0;k<N;k++){
        printf("x%d = %f \n",k+1,a[k][N]);
    }
}