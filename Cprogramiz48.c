#include <stdio.h>

int main(){
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;
	printf("Nhap so hang cua ma tran r = ");
	scanf("%d", &r);
	printf("Nhap so cot cua ma tran c = ");
	scanf("%d", &c);
	printf("Ma tran thu nhat la \n");
	for(i = 1; i <= r; i++){
		for(j = 1; j <= c; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Ma tran thu hai la \n");
	for(i = 1; i <= r; i++){
		for(j = 1; j <= c; j++){
			printf("b[%d][%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for(i = 1; i <= r; i++){
		for(j = 1; j <= c; j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nTong cua 2 ma tran la \n");
	for(i = 1; i <= r; i++){
		for(j = 1; j <= c; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
} 
