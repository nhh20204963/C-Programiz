#include <stdio.h>
#include <math.h>
int SNT(int n){
	int i, dem = 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			dem++;
		}
	}
	if(dem == 0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	int check = 0;
	printf("Nhap vao so tu nhien bat ki = ");scanf("%d", &n);
	int i;
	for(i = 2; i <= n / 2; i++){
		if(SNT(i) == 1){
			if(SNT(n - i) == 1){
				printf("%d = %d + %d\n", n, i, n-i);
				check = 1;
			}
		}
	}
	if(check == 0){
		printf("%d khong the phan tich thanh tong 2 so nguyen to duoc", n);
	}
}
