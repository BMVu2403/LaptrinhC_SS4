#include <stdio.h>

int main() {
    int chisocu, chisomoi, sodien;
    long tiendien = 0;

    printf("Nhap chi so cu: ");
    scanf("%d", &chisocu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chisomoi);

    sodien = chisomoi - chisocu;

    if (sodien < 0) {
        printf("Chi so moi phai lon hon hoac bang chi so cu.\n");
        return 1;
    }

    if (sodien <= 50) {
        tienien = sodien * 10000;
    } else if (sodien <= 100) {
        tiendien = 50 * 10000 + (sodien - 50) * 15000;
    } else if (sodien <= 150) {
        tienien = 50 * 10000 + 50 * 15000 + (sodien - 100) * 20000;
    } else if (soDien <= 200) {
        tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (sodien - 150) * 25000;
    } else {
        tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (sodien - 200) * 30000;
    }

    printf("So dien tieu thu: %d kWh\n", sodien);
    printf("Tien dien phai tra: %ld VND\n", tiendien);

    return 0;
}

