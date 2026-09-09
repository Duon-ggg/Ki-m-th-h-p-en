#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int month, year;
    printf("Nhap thang: ");
    if (scanf("%d", &month) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }
    printf("Nhap nam: ");
    if (scanf("%d", &year) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (month < 1 || month > 12) {
        printf("Loi: thang khong hop le (phai tu 1 den 12)\n");
        return 1;
    }
    if (year <= 0) {
        printf("Loi: nam khong hop le\n");
        return 1;
    }

    int days;
    switch (month) {
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = isLeapYear(year) ? 29 : 28;
            break;
        default:
            days = 31;
    }

    printf("Thang %d nam %d co %d ngay\n", month, year, days);
    return 0;
}
