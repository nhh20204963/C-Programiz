#include <stdio.h>

int main(){
	int a[100], n, i;
	printf("so luong phan tu cua mang = ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		printf("%d ", *(a + i));
	}
}
