#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf("Nhap a = ");scanf("%d", &a);
	printf("Nhap b = ");scanf("%d", &b);
	printf("Nhap c = ");scanf("%d", &c);
	float delta, x1, x2;
	delta = b * b - 4 * a * c;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	printf("\nPhuong trinh bac 2: %d * x^2 + %d * x + %d = 0", a, b, c);
	if(delta > 0){
		printf("\nPhuong trinh co 2 nghiem x1 = %.2f va x2 = %.2f", x1, x2);
	}else if(delta == 0){
		printf("\nPhuong trinh co 1 nghiem kep x = %.2f", -b / (2.00 * a));
	}else{
		printf("\nPhuong trinh vo nghiem");
	}
}
