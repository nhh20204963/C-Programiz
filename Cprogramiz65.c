#include <stdio.h>
typedef struct time{
	int gio;
	int phut;
	int giay;
}TIME;
void nhap(TIME *t){
	printf("\nNhap gio: ");scanf("%d", &t->gio);
	printf("Nhap phut: ");scanf("%d", &t->phut);
	printf("Nhap giay: ");scanf("%d", &t->giay);
}
void timediff(TIME t1, TIME t2, TIME *t3){
	if(t1.gio > t2.gio){
		while(t2.giay > t1.giay){
			--t1.phut;
			t1.giay += 60;
		}
		t3->giay = t1.giay - t2.giay;
		while(t2.phut > t1.phut){
			--t1.gio;
			t1.phut += 60;
		}
		t3->phut = t1.phut - t2.phut;
		t3->gio = t1.gio - t2.gio;
	}else{
		while(t1.giay > t2.giay){
			--t2.phut;
			t2.giay += 60;
		}
		t3->giay = t2.giay - t1.giay;
		while(t1.phut > t2.phut){
			--t2.gio;
			t2.phut += 60;
		}
		t3->phut = t2.phut - t1.phut;
		t3->gio = t2.gio - t1.gio;
	}
}
int main(){
	TIME t1, t2, t;
	printf("Nhap thoi gian 1: ");
	nhap(&t1);
	printf("\nNhap thoi gian 2: ");
	nhap(&t2);
	timediff(t1, t2, &t);
	printf("Time diff: %d:%d:%d - %d:%d:%d = %d:%d:%d", t1.gio, t1.phut, t1.giay, t2.gio, t2.phut, t2.giay, t.gio, t.phut, t.giay);
}
