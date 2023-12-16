#include <stdio.h>

int main() {
    double nilaiRupiah, nilaiDollar;
    const double kursDollar = 14250; 

    printf("Masukkan nilai dalam Rupiah (Rp): ");
    scanf("%lf", &nilaiRupiah);

    nilaiDollar = nilaiRupiah / kursDollar;

    printf("%.2f Rupiah setara dengan %.2f Dollar\n", nilaiRupiah, nilaiDollar);

    return 0;
}

