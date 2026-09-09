#include <stdio.h>

int main() {
    long long n;
    printf("Nhap n: ");
    if (scanf("%lld", &n) != 1) { printf("Loi: du lieu khong hop le\n"); return 1; }

    if (n < 2) {
        printf("%lld khong phai la so nguyen to\n", n);
        return 0;
    }

    int isPrime = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) { isPrime = 0; break; }
    }

    if (isPrime) printf("%lld la so nguyen to\n", n);
    else printf("%lld khong phai la so nguyen to\n", n);
    return 0;
}
