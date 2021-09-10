#include <stdio.h>

void checkArmstrong(int n){
	int sodu, result = 0;
	int num = n;
	while(n != 0){
		sodu = n % 10;
		result += sodu * sodu * sodu;
		n = n / 10;
	}
	if(result == num){
		printf("%d la so Armstrong", num);
	}else{
		printf("%d khong la so Armstrong", num);
	}
}
int main(){
	int n;
	printf("Nhap vao 1 so nguyen duong bat ki  = ");
	scanf("%d", &n);
	checkArmstrong(n);
}
