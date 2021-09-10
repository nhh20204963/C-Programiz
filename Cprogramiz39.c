#include <stdio.h>

int GCD(int a, int b){
	if(b != 0){
		return GCD(b, a % b);
	}else{
		return a;
	}
}
int main(){
	int a, b;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("GCD of %d and %d is %d", a, b, GCD(a, b));
}
