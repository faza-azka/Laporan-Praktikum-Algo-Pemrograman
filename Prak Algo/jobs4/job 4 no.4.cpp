#include <stdio.h>

int main() {
    int durasiFilm;
    float tarifPertama, tarifBerikutnya, totalPembayaran;

    tarifPertama = 15000.0;
    tarifBerikutnya = tarifPertama * 0.5;

    printf("Masukkan durasi film (jam): ");
    scanf("%d", &durasiFilm);

    if (durasiFilm > 0) {
        totalPembayaran = tarifPertama + tarifBerikutnya * (durasiFilm - 1);

        printf("Total pembayaran: Rp %.2f\n", totalPembayaran);
    } else {
        printf("Durasi film harus lebih dari 0 jam.\n");
    }

    return 0;
}

