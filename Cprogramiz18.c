#include <stdio.h>

int main(){
	int n, i;
	unsigned long long fact = 1;
	printf("Nhap so tu nhien n = ");
	scanf("%d", &n);
	if(n < 0){
		printf("\nError");
	}else{
		for(i = 1; i <= n; i++){
			fact *= i;
		}
		printf("%d! = %llu", n, fact);
	}
}
