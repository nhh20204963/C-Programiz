#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    printf("Nhap vao 1 chuoi ki tu :");
    scanf("%s", &s);
    printf("Do dai cua chuoi = %d", strlen(s));
    return 0;
}
