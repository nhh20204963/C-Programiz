#include <stdio.h>
#include <math.h>

int convertBintoDec(long long n){
	int remainder, dec = 0;
	int i = 0;
	while(n != 0){
		remainder = n % 10;
		n /= 10;
		dec += remainder * pow(2, i);
		++i;
	}
	return dec;
}

long long convertDectoBin(int n){
	int remainder;
	int bin = 0, i = 1;
	while(n != 0){
		remainder = n % 2;
		n /= 2;
		bin += remainder * i;
		i *= 10;
	}
	return bin;
}
int main(){
	long long bin;
	printf("Nhap vao 1 day nhi phan bat ki = ");
	scanf("%lld", &bin);
	printf("%lld doi sang he thap phan la  %d", bin, convertBintoDec(bin));
	int dec;
	printf("\nNhap vao 1 so thap phan bat ki = ");
	scanf("%d", &dec);
	printf("%d doi sang he nhi phan la %lld", dec, convertDectoBin(dec));
}
