#include <stdio.h>

int GCD(int a, int b){
	if(a == 0 || b == 0){
		return a + b;
	}
	while(a != b){
		if(a > b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}
int main(){
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("BCNN trong %d va %d la %d", a, b, (a * b) / GCD(a, b));
}
