#include <stdio.h>

int main(){
	int A[100][100], B[100][100], multiply[100][100];
	int r1,c1,r2,c2,i,j;
	int check = 0;
	printf("So hang ma tran A = ");scanf("%d", &r1);
	printf("So cot ma tran A = ");scanf("%d", &c1);
	for(i = 1; i <= r1; i++){
		for(j = 1; j <= c1; j++){
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	for(i = 1; i <= r1; i++){
		for(j = 1; j <= c1; j++){
			printf("%d  ", A[i][j]);
		}
		printf("\n");
	}
	printf("So hang ma tran B = ");scanf("%d", &r2);
	printf("So cot ma tran B = ");scanf("%d", &c2);
	for(i = 1; i <= r2; i++){
		for(j = 1; j <= c2; j++){
			printf("B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	for(i = 1; i <= r2; i++){
		for(j = 1; j <= c2; j++){
			printf("%d  ", B[i][j]);
		}
		printf("\n");
	}

}
