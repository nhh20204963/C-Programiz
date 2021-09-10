#include <stdio.h>

int max(int a, int b){
	return (a > b ? a : b);
}
int main(){
	int a, b, c;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("Nhap c = ");scanf("%d", &c);
	printf("\nMax %d %d %d la %d", a, b, c, max(max(a, b), c));
}
