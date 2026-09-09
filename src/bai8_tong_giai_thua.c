#include <stdio.h>

long long giaiThua(int k) {
    long long result = 1;
    for (int i = 2; i <= k; i++) result *= i;
    return result;
}

int main() {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (n <= 0) {
        printf("Loi: n phai la so nguyen duong\n");
        return 1;
    }
    if (n > 20) {
        printf("Loi: n qua lon, ket qua co the bi tran so\n");
        return 1;
    }

    long long S = 0;
    for (int i = 1; i <= n; i++) S += giaiThua(i);

    printf("S = %lld\n", S);
    return 0;
}
