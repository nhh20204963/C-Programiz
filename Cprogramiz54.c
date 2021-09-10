#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	double *data;
	printf("So phan tu cua mang la = ");
	scanf("%d", &n);
	data = (double *)calloc(n, sizeof(double));
	if(data == NULL){
		printf("Error!!!");
		exit(0);
	}
	for(i = 0; i < n; i++){
		printf("number %d = ", i + 1);
		scanf("%lf", data + i);
	}
	for(i = 0; i < n; i++){
		if(*data < *(data + i)){
			*data = *(data + i);
		}
	}
	printf("Max number = %.2lf", *data);
	free(data);
	return 0;
}
