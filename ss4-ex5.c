#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("So %d nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    } else {
        printf("So %d khong nam trong khoang giua %d va %d.\n", num3, num1, num2);
    }

    return 0;
}

