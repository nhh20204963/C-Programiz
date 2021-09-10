#include <stdio.h>

struct distance{
	float inch;
	float feet;
}d1, d2, sum;
int main(){
	printf("Nhap vao khoang cach 1 : \n");
	printf("Feet1 = ");
	scanf("%f", &d1.feet);
	printf("Inch1 = ");
	scanf("%f", &d1.inch);
	printf("Nhap vao khoang cach 2: \n");
	printf("Feet2 = ");
	scanf("%f", &d2.feet);
	printf("Inch2 = ");
	scanf("%f", &d2.inch);
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	printf("Tong 2 khoang cach la : ");
	printf("%.2f feet hay %.2f inch", sum.feet, sum.inch);
	return 0;
}
