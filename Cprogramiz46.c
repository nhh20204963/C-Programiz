#include <stdio.h>

int main(){
	int arr[100];
	int n, i;
	printf("So phan tu cua mang la ");
	scanf("%d", &n);
	while(n > 100 || n < 1){
		printf("Ban da nhap sai. Moi ban nhap lai ...");
		printf("So phan tu cua mang nhap lai =  ");
		scanf("%d", &n);
	}
	for(i = 0; i < n; i++){
		printf("%d.a[%d] = ", i+1, i);
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("Max of array is %d", max);
}
