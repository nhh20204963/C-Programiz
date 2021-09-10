#include <stdio.h>

int factorial(int n){
	if(n != 0){
		return n * factorial(n - 1);
	}else{
		return 1;
	}
}
int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d", &n);
	printf("%d! = %d", n, factorial(n));
}
