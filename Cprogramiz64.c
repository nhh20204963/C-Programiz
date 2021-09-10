#include <stdio.h>

struct complex{
	float real;
	float imag;
}sp1, sp2, sp;
int main(){
	printf("So phuc dau tien : \n");
	printf("Real1 = ");
	scanf("%f", &sp1.real);
	printf("Imag1 = ");
	scanf("%f", &sp1.imag);
	printf("So phuc thu hai : \n");
	printf("Real2 = ");
	scanf("%f", &sp2.real);
	printf("Imag2 = ");
	scanf("%f", &sp2.imag);
	sp.real = sp1.real + sp2.real;
	sp.imag = sp1.imag + sp2.imag;
	printf("So phuc tong : ");
	printf("%.2f + %.2fi", sp.real, sp.imag);
}
