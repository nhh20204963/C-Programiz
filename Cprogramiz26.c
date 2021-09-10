#include <stdio.h>

int main(){
	int num, base, i;
	int result;
	printf("Enter a num = ");
	scanf("%d", &num);
	printf("Enter a base = ");
	scanf("%d", &base);
	for(i = 1;i <= base;i++){
		result *= num;
	}
	printf("%d ^ %d = %d", num, base, result);
} 
