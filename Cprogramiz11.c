#include <stdio.h>

int main(){
	char c;
	printf("Nhap vao ky tu la ");
	scanf("%c", &c);
	if(c == 'u'|| c == 'e' || c == 'o' || c == 'a' || c == 'i' || c == 'U' || c == 'E' || c == 'O' || c == 'A' || c == 'I'){
		printf("%c la nguyen am", c);
	}else{
		printf("%c la phu am", c);
	}
}
