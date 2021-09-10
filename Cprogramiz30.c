#include <stdio.h>

int main(){
	int num, remainder, result = 0;
	printf("Nhap vao so bat ki = ");
	scanf("%d", &num); 
	int n = num;
	while(n!= 0){
		remainder = n % 10;
		result += remainder * remainder * remainder;
		n /= 10;
	}
	if(result == num){
		printf("\nSo nguyen duong %d la so Amstrong", num);
	}else{
		printf("\nSo nguyen duong %d khong la so Amstrong", num);
	}
} 
