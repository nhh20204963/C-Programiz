#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	int dem = 0;
	printf("Nhap so tu nhien bat ki ");
	scanf("%d", &n);
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			dem++;
		}
	}
	if(dem == 0){
		printf("\n So %d la so nguyen to", n);
	}else{
		printf("\n So %d khong la so nguyen to", n);
	}
}
