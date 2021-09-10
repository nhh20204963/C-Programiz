#include <stdio.h>

int main(){
	int n;
	printf("nhap 1 so tu nhien bat ki = ");
	scanf("%d", &n);
	int dem = 0;
	printf("So chu so nguyen duong cua %d la ", n);
	while(n != 0){
		n /= 10;
		++dem;
	}
	printf("%d", dem);
}
