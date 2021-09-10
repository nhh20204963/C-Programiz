#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	char ch;
	int count = 0;
	int i;
	int len = strlen(str);
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	printf("Nhap ki tu: ");
	scanf("%s", &ch);
	for(i = 0; i <= len; i++){
		if(ch == str[i]);
		count++;
	}
	printf("So lan xuat hien cua ki tu %c la %d", ch, count);
}
