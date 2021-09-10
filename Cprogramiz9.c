#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	int c = a;
	a = b; 
	b = c;
	printf("Swap %d and %d for the result %d and %d", a, b, b, a);
}
