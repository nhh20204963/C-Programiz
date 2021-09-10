#include <stdio.h>

int main(){
	char s1[1000], s2[1000], i;
	printf("Nhap vao chuoi 1 : ");
	fgets(s1, sizeof(s1), stdin);
	for(i = 0; s1[i] != '\0'; i++){
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	printf("Chuoi 2 duoc sao chep tu mang 1 la : %s", s2);
	return 0;
}
