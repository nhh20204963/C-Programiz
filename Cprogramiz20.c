#include <stdio.h>

int main(){
	int n, i;
	int first = 0, second = 1;
	while(n <= 0){
		printf("Nhap vao so nguyen duong n = ");
		scanf("%d", &n);
	}
	printf("\n %d so dau tien cua day Fibonacci la %d %d ", n, first ,second);
	for(i = 3; i <= n; i++){
		int third = first + second;
		first = second;
		second = third;
		printf("%d ", third);
	}
}
