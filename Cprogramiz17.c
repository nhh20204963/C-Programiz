#include <stdio.h>

int main(){
	int n;
	printf("Nhap so tu nhien n = ");
	scanf("%d", &n);
	int sum = 0;
	int i;
	printf("Tong cac so tu nhien tu 1 den %d la ", n);
	for(i = 0; i <= n; i++){
		sum += i;
	}
	printf("%d", sum);
}
