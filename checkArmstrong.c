#include <stdio.h>

int Armstrong(int n){
	int sodu, result = 0;
	int num = n;
	while(n!= 0){
		sodu = n % 10;
		result += sodu * sodu * sodu;
		n = n / 10;
	}
	if(result == num){
		printf("%d ", result);
	}else{
		printf("");
	}
}
int main(){
	int a, b;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("Cac so armstrong nam trong khoang %d va %d la ", a, b);
	int n;
	for(n = a + 1; n < b; n++){
		Armstrong(n);
	}
}
