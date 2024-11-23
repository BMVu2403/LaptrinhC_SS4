#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);

    printf("Nhap vào so thu ba: ");
    scanf("%d", &c);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Các so theo thu tu tu nho den lon: %d, %d, %d\n", a, b, c);

    return 0;
}

