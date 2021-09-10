#include <stdio.h>

int power(int coso, int somu){
	if(somu != 0){
		return (coso * power(coso, somu - 1));
	}else{
		return 1;
	}
}
int main(){
	int coso, somu;
	printf("Nhap vao co so = ");scanf("%d", &coso);
	printf("Nhap vao so mu = ");scanf("%d", &somu);
	printf("%d ^ %d = %d", coso, somu, power(coso, somu));
}
