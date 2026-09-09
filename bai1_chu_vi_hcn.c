#include <stdio.h>

int main() {
    double a, b;
    printf("Nhap chieu dai a: ");
    if (scanf("%lf", &a) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }
    printf("Nhap chieu rong b: ");
    if (scanf("%lf", &b) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (a <= 0 || b <= 0) {
        printf("Loi: chieu dai va chieu rong phai la so duong\n");
        return 1;
    }

    double chuVi = 2 * (a + b);
    printf("Chu vi hinh chu nhat: %.2f\n", chuVi);
    return 0;
}
