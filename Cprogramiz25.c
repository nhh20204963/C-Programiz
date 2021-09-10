#include <stdio.h>

int main(){
	int n;
	printf("Nhap vao so nguyen duong n = ");
	scanf("%d", &n);
	int remainder, reversed = 0;
	printf("\nSo dao nguoc cua so %d la ", n);
	while(n != 0){
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	printf("%d", reversed);
	
}
