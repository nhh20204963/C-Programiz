#include <stdio.h>
#include <math.h>

int convertOctalToDecimal(int Oct){
	int Dec = 0, i = 0, rem;
	while(Oct != 0){
		rem = Oct % 10;
		Oct /= 10;
		Dec += rem * pow(8, i);
		++i;
	}
	return Dec;
}
int convertDecimalToOctal(int Dec){
	int Oct, i = 0, rem;
	while(Dec != 0){
		rem = Dec % 8;
		Dec /= 8;
		Oct += rem * pow(10, i);
		++i;
	}
	return Oct;
}
int main(){
	int Oct;
	printf("Nhap vao 1 so bat phan = ");
	scanf("%d", &Oct);
	printf("%d trong he thap phan la %d", Oct, convertOctalToDecimal(Oct));
	int Dec;
	printf("\nNhap vao 1 so thap phan = ");
	scanf("%d", &Dec);
	printf("%d trong he bat phan la %d", Dec, convertDecimalToOctal(Dec));
}
