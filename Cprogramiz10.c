#include <stdio.h>

int main(){
	int num;
	printf("Enter num = ");
	scanf("%d", &num);
	if(num % 2 == 0){
		printf("%d la 1 so chan", num);
	}else{
		printf("%d la 1 so le", num);
	}
}
