#include <stdio.h>

int  main(){
	int a[10][10], transpose[10][10], row, column;
	printf("So hang cua ma tran ban dau = ");scanf("%d", &row);
	printf("So cot cua ma tran ban dau = ");scanf("%d", &column);
	int i, j;
	for(i = 1; i <= row; i++){
		for(j = 1; j <= column; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Ma tran ban dau da cho la \n");
	for(i = 1; i <= row; i++){
		for(j = 1; j <= column; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(i = 1; i <= column; i++){
		for(j = 1; j <= row; j++){
			transpose[i][j] = a[j][i];
		}
	}
	printf("\nMa tran sau khi chuyen vi la \n");
	for(i = 1; i <= column; i++){
		for(j = 1; j <= row; j++){
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
}
