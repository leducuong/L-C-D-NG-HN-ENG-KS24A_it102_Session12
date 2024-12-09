#include <stdio.h>

int tinhGiaiThua(int n) {
    if (n < 0) {
        printf("Khong the tinh giai thua cho so am!\n");
        return -1;
    }
    int giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    int ketQua = tinhGiaiThua(n);
    if (ketQua != -1) {
        printf("Giai thua cua %d la: %d\n", n, ketQua);
    }
    return 0;
}
