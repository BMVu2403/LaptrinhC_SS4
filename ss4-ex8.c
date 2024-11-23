#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap vao canh thu nhat: ");
    scanf("%f", &a);

    printf("Nhap vao canh thu hai: ");
    scanf("%f", &b);

    printf("Nhap vao canh thu ba: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }

    return 0;
}

