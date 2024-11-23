#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap vao ngay: ");
    scanf("%d", &day);

    printf("Nhap vao thang: ");
    scanf("%d", &month);

    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if (year < 1 || month < 1 || month > 12) {
        printf("Ngay %d/%d/%d không hop le.\n", day, month, year);
        return 0;
    }

    int maxDay;
    if (month == 2) { // Thang 2
        maxDay = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // Thang 4, 6, 9, 11
        maxDay = 30;
    } else { // Các tháng con lai
        maxDay = 31;
    }

    if (day < 1 || day > maxDay) {
        printf("Ngay %d/%d/%d không hop le.\n", day, month, year);
    } else {
        printf("Ngay %d/%d/%d là hop le.\n", day, month, year);
    }

    return 0;
}

