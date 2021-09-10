#include <stdio.h>

int main(){
	int i, j;
	printf("Bang cuu chuong la: ");
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 9; j++){
			printf("\n%d * %d = %d ", i, j, i * j);
		}
		printf("\n");
	}
}
