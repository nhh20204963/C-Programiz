#include <stdio.h>
#include <string.h>

int main(){
	char s1[100], s2[100];
	printf("Nhap vao chuoi 1 : ");
	fgets(s1, sizeof(s1), stdin);
	printf("Nhap vao chuoi 2 : ");
	fgets(s2,sizeof(s2), stdin); 
	strcat(s1, s2);
	printf("Chuoi sau khi noi: \n%s", s1);
}
