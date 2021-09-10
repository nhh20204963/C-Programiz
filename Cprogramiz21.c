#include <stdio.h>
/* dung cach tru */
int GCD(int a, int b){
	if(a == 0 || b == 0){
		return a + b;
	}
	while(a != b){
		if(a > b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}
/* dung cach chia lay du */
int gcd(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    return a + b; 
}
int main(){
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("UCLN trong %d va %d la %d", a, b, GCD(a, b));
}
