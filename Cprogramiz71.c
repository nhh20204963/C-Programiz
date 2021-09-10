#include <stdio.h>
#include <math.h>
void nuakimtuthapsao(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf(" * ");
		}
		printf("\n");
	}
}
void nuakimtuthapso(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
void nuakimtuthapchu(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%c ", 64 + i);
		}
		printf("\n");
	}
}
void nuakimtuthapsaonguoc(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j;
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			printf(" * ");
		}
		printf("\n");
	}
}
void nuakimtuthapsonguoc(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j;
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
void kimtuthapdaydu(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2 * n - 1; j++){
			if(abs(n - j) < i){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
}
void kimtuthapdayduso(){
	int n;
	printf("Nhap n = ");scanf("%d", &n);
	int i, j, k;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2 * n - 1; j++){
			if(n - j == i - 1){
				int k = i;
				while(k <= 2 * i - 1){
					printf("%d ", k);
					k++;
				}
				k -= 2;
				while(k >= i){
					printf("%d ", k);
					k--;
				}
				
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main(){
	kimtuthapdayduso();
}
