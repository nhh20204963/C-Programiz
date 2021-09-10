#include <stdio.h>
#include <math.h>

int main(){
	int arr[100];
	int n, i;
	float sum1, sum2, tb, phuongsai, dolechchuan;
	printf("Nhap vao so phan tu cua mang ");
	scanf("%d", &n);
	while(n > 100 || n < 1){
		printf("Khong hop le. ");
		printf("Moi nhap lai so phan tu cua mang = ");
		scanf("%d", &n);
	}
	for(i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		sum1 += arr[i];
	}
	tb = sum1 / n;
	for(i = 0; i < n; i++){
		sum2 += (tb - arr[i]) * (tb - arr[i]);
	}
	phuongsai = sum2 / n;
	dolechchuan = sqrt(phuongsai);
	printf("\nGTTB cua mang = %.2f", tb);
	printf("\nPhuong sai cua mang = %.2f", phuongsai);
	printf("\nDo lech chuan cua mang = %.2f", dolechchuan);
}

