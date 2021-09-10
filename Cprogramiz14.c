#include <stdio.h>

int main(){
	int year;
	printf("Nhap nam = ");
	scanf("%d", &year);
	if(year % 4 == 0 && year % 100 != 0){
		printf("\nNam %d la nam nhuan", year);
	}else if(year % 400 == 0){
		printf("\nNam %d la nam nhuan", year);
	}else{
		printf("\nNam %d khong la nam nhuan", year);
	}
}
