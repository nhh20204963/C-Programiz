#include <stdio.h>

struct student{
	char name[50];
	char gt[5];
	int mssv;
	int age;
	int ngaysinh;
	int thangsinh;
	int namsinh;
}student;
int main(){
	printf("Nhap vao thong tin cua sinh vien");
	printf("\nTen : ");
	fgets(student.name ,sizeof(student.name), stdin);
	printf("Gioi tinh : ");
	fgets(student.gt, sizeof(student.gt), stdin);
	printf("Ma so sinh vien : ");
	scanf("%d", &student.mssv);
	printf("Tuoi : ");
	scanf("%d", &student.age);
	printf("Ngay thang nam sinh : ");
	scanf("%d %d %d", &student.ngaysinh, &student.thangsinh, &student.namsinh);
	printf("Thong tin cua sinh vien vua nhap la : ");
	printf("\nTen : %s", student.name);
	printf("\nGioi tinh : %s", student.gt);
	printf("\nMa so sinh vien : %d", student.mssv);
	printf("\nTuoi : %d", student.age);
	printf("\nNgay thang nam sinh : %d %d %d", student.ngaysinh, student.thangsinh, student.namsinh); 
}
