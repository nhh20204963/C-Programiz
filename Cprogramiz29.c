#include <stdio.h>
#include <math.h>
void checkprime(int n){
	int i, dem = 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			dem++;
		}
	}
	if(dem == 0){
		printf("%d ", n);
	}else{
		printf("");
	}
}
int main(){
	int a, b, i;
	printf("Nhap vao so a = ");scanf("%d", &a);
	printf("Nhap vao so b = ");scanf("%d", &b);
	for(i = a; i <= b; i++){
		checkprime(i);
	}
}
