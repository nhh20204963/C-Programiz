#include <stdio.h>
#include <math.h>

int convertBinToOctal(long long bin){
	int oct = 0, dec = 0, i = 0;
    // converting binary to decimal
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;
    // converting to decimal to octal
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}
long long convertOctalToBin(int oct){
	int dec = 0, i = 0;
    long long bin = 0;
    // converting octal to decimal
    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;
   // converting decimal to binary
    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}
int main(){
	long long bin;
	printf("Nhap vao 1 so nhi phan = ");
	scanf("%lld", &bin);
	printf("%lld doi sang he bat phan la %d", bin, convertBinToOctal(bin));
	int oct;
	printf("\nNhap vao 1 so bat phan = ");
	scanf("%d", &oct);
	printf("%d doi sang he nhi phan la %lld", oct, convertOctalToBin(oct));
}

