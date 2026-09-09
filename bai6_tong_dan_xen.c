#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (n <= 0) {
        printf("Loi: n phai la so nguyen duong\n");
        return 1;
    }

    long long S = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) S += i;
        else S -= i;
    }

    printf("S = %lld\n", S);
    return 0;
}
