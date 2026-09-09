#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Nhap he so a: ");
    if (scanf("%lf", &a) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }
    printf("Nhap he so b: ");
    if (scanf("%lf", &b) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }
    printf("Nhap he so c: ");
    if (scanf("%lf", &c) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("Phuong trinh co vo so nghiem\n");
            else printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh co nghiem duy nhat x = %.2f\n", -c / b);
        }
        return 0;
    }

    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep x = %.2f\n", x);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }
    return 0;
}
