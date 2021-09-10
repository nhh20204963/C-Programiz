#include <stdio.h>
#include <string.h>
typedef struct sinhvien{
	char ten[30];
	int stt;
	float diem;
}SV;
void nhap(SV *sv){
	printf("\nNhap ten: ");fflush(stdin);gets(sv->ten);
	printf("Nhap stt: ");scanf("%d", &sv->stt);
	printf("Nhap diem: ");scanf("%f", &sv->diem);
}
void xuat(SV sv){
	printf("\n%-30s %-5d %-5.2f", sv.ten, sv.stt, sv.diem);
}
void nhapSV(SV ds[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\nNhap ttsv thu %d: ", i + 1);
		nhap(&ds[i]);
	}
}

void xuatSV(SV ds[], int n){
	int i;
	printf("%-30s %-5s %-5s", "Ten", "STT", "Diem");
	for(i = 0; i < n; i++){
		xuat(ds[i]);
	}
}
int main(){
	int n;
	printf("Nhap so luong sinh vien: ");scanf("%d", &n);
	SV ds[100];
	nhapSV(ds, n);
	xuatSV(ds, n);
}
