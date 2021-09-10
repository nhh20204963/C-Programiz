#include <stdio.h>
#include <math.h>
int SNT(int n){
	int i;
	int dem = 0;
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
	return 0;
}
int main(){
	int a, b;
	int num;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("Cac so nguyen to nam trong khoang tu %d den %d la ", a, b);
	for(num = a + 1; num < b; num++){
		SNT(num);
	} 
}
