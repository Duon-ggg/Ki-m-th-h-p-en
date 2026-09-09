#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap a: ");
    if (scanf("%d", &a) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }
    printf("Nhap b: ");
    if (scanf("%d", &b) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (a == 0 && b == 0) {
        printf("Loi: a va b khong the dong thoi bang 0\n");
        return 1;
    }

    a = abs(a);
    b = abs(b);
    printf("UCLN cua a va b la: %d\n", gcd(a, b));
    return 0;
}
