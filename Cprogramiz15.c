#include <stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n > 0){
		printf("\n %d la so duong", n);
	}else if(n < 0){
		printf("\n %d la so am", n);
	}else{
		printf("\n 0 khong la so am khong la so duong");
	}
}
