#include <stdio.h>

void checkAmstrong(int num){
	int n = num;
	int remainder, result = 0;
	while(n!= 0){
		remainder = n % 10;
		result += remainder * remainder * remainder;
		n /= 10;
	}
	if(result == num){
		printf("\n%d ", num);
	}else{
		printf("");
	}
}
int main(){
	int a, b;
	int num;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("So Amstrong nam trong doan [%d, %d] la ", a, b);
	for(num = a; num <= b; num++){
		checkAmstrong(num);
	}
}
