#include <stdio.h>

int main(void){
	int i, j, k;

	int a[2][4] = {
        {1,2,3,5},
        {3,1,2,-1}
    };

	int b[4][2] = {
        {0,3},
        {1,2},
        {-3,4},
        {-2,-1}
    };

	int c[2][2];

//掛け算
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<4;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

//出力
	printf("A=\n");
	for(i=0;i<2;i++){
		printf("[");
		for(j=0;j<2;j++){
			printf(" %d ",c[i][j]);
		}
		printf("]\n");
	}
}
