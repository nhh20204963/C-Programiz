#include <stdio.h>

int recursion(int n){
	if(n != 0){
		return n + recursion(n - 1);
	}else{
		return n;
	}
} 
int main(){
	int n;
	printf("Nhap vao so tu nhien n = ");
	scanf("%d", &n);
	printf("Sum = %d", recursion(n));
}
