#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[100];
	FILE *fp;
	fp = fopen("program.txt", "w");
	if(fp == NULL){
		printf("ERROR!");
	}
	printf("Nhap chuoi: ");fgets(s, sizeof(s), stdin);
	fprintf(fp, "%s", s);
	fclose(fp);
	return 0;
}
