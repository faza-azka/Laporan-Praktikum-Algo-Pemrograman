#include <stdio.h>

int main() {
    float nilaiPresensi, nilaiPraktek, nilaiUTS, nilaiUAS, totalnilaiAkhir;

    printf("Masukkan nilai presensi: ");
    scanf("%f", &nilaiPresensi);

    printf("Masukkan nilai praktek: ");
    scanf("%f", &nilaiPraktek);

    printf("Masukkan nilai UTS: ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan nilai UAS: ");
    scanf("%f", &nilaiUAS);

    totalnilaiAkhir = (nilaiPresensi * 0.1) + (nilaiPraktek * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);
 
    printf("Total Nilai Akhir: %.2f\n", totalnilaiAkhir);

    return 0;
}

