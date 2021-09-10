#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[100];
	FILE *fp;
	if((fp = fopen("program.txt", "r")) == NULL){
		printf("ERROR");
	}
	fscanf(fp, "%[^\n]", s);
	printf("%s", s);
	fclose(fp);
	return 0;
}

